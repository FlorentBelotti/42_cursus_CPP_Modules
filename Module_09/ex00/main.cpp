/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:33:30 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/26 19:39:05 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nom du programme : btc

Objectif : affiche la valeur d'une certaine quantité de bitcoins à une date donnée.

Base de donnee : data.csv
Entree du programme : un fichier "input.txt" avec le format suivant "YYYY-MM-DD | X.XX", avec X, un entier ou un float qui represente la valeur du bitcoin.

Si la date n'est pas presente dans la base de donnee, le programme doit utiliser la valeur la plus proche de la date donnee, lorsque c'est possible la date precedente.

Format de data.csv:

date | exchange_rate
YYYY-MM-DD | 3

Format de la sortie du programme :

"YYYY-MM-DD => X = Y"

ou X est la valeur du bitcoin et Y est la valeur multiplie par le taux de change de la date approprie.

*/

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include "Color.hpp"

bool isNumber(const std::string& n) {
    const char* ptr = n.c_str();
    char* end;

    double nb = std::strtod(ptr, &end);

    if (nb >= 0 && nb < 10)
		return true;
	return false;
}

bool processLine(const std::string& line, std::map<std::string, double>& inputMap) {
    for (int i = 0; i < 10; ++i) {
        if ((i == 4 || i == 7)) {
            if (line[i] != '-') return false;
        } else {
            if (!std::isdigit(line[i])) return false;
        }
    }
    if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        return false;

    std::string date = line.substr(0, 10);
    std::string nb = line.substr(13);

    if (!isNumber(nb))
        return false;

    inputMap[date] = std::strtod(nb.c_str(), NULL);
    return true;
}

bool processInput(std::map<std::string, double>& inputMap) {
    std::ifstream input("./input.txt");

    if (input.is_open()) {
        std::string line;
        while (std::getline(input, line)) {
            if (!processLine(line, inputMap)) {
                std::cerr << RED << "Input error : line usage \"YYYY-MM-DD | x\"" << RESET_COLOR << std::endl;
                return false;
            }
        }
        return true;
    }
    else {
        std::cerr << RED << "Input error : cannot open file" << RESET_COLOR << std::endl;
        return false;
    }
}

bool processCSV(const std::string& filename, std::map<std::string, double>& dataMap) {
    std::ifstream input(filename.c_str());

    if (input.is_open()) {
        std::string line;
        while (std::getline(input, line)) {
            std::string date = line.substr(0, 10);
            std::string value = line.substr(11);

            value.erase(0, value.find_first_not_of(' '));
            value.erase(value.find_last_not_of(' ') + 1);

            dataMap[date] = std::strtod(value.c_str(), NULL);
        }
        input.close();
        return true;
    } else {
        std::cerr << RED << "Input error: cannot open file " << filename << RESET_COLOR << std::endl;
        return false;
    }
}

void displayMap(const std::map<std::string, double>& dataMap) {
    for (std::map<std::string, double>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void processAndDisplayResults(const std::map<std::string, double>& inputMap, const std::map<std::string, double>& dataMap) {
    for (std::map<std::string, double>::const_iterator it = inputMap.begin(); it != inputMap.end(); ++it) {
        const std::string& date = it->first;
        double value = it->second;

        double exchangeRate = 0.0;

        std::map<std::string, double>::const_iterator rateIt = dataMap.find(date);
        if (rateIt != dataMap.end()) {
            exchangeRate = rateIt->second;
        } else {
            std::map<std::string, double>::const_reverse_iterator lower;
            for (lower = dataMap.rbegin(); lower != dataMap.rend(); ++lower) {
                if (lower->first < date) {
                    break;
                }
            }

            if (lower != dataMap.rend()) {
                exchangeRate = lower->second;
            } else {
                std::cerr << "No previous date found for: " << date << std::endl;
                continue;
            }
        }

        double result = value * exchangeRate;
        std::cout << YELLOW << date << " => " << std::fixed << std::setprecision(2) << value
                  << RESET_COLOR << " * " << MAGENTA << exchangeRate << RESET_COLOR << " = " << GREEN << result << RESET_COLOR << std::endl;
    }
}

int main() {
    std::map<std::string, double> inputMap;
	std::map<std::string, double> dataMap;

    if (!processInput(inputMap) || !processCSV("data.csv", dataMap)) {
        std::cerr << RED << "Exiting program..." << RESET_COLOR << std::endl;
        return 1;
    }

    processAndDisplayResults(inputMap, dataMap);

    return 0;
}
