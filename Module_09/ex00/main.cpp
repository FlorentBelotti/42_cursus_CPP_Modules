/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:05 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/29 15:42:25 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <map>
#include "Color.hpp"

bool processCSV(const std::string& filename, std::map<std::string, double>& dataMap) {
    std::ifstream input(filename.c_str());

    if (input.is_open()) {
        std::string line;
        while (std::getline(input, line)) {
            std::string date = line.substr(0, 10);
            std::string value = line.substr(11);

            value.erase(0, value.find_first_not_of(' '));
            value.erase(value.find_last_not_of(' ') + 1);

            dataMap[date] = atof(value.c_str());
        }
        input.close();
        return true;
    } else {
        std::cerr << RED << "Input error: cannot open file " << filename << RESET_COLOR << std::endl;
        return false;
    }
}

bool isValidDate(const std::string& date) {
    if (date.size() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;
    for (int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7) continue;
        if (!isdigit(date[i])) return false;
    }
    return true;
}

bool processLine(const std::string& line) {
    
    if (line.size() < 14 || line[11] != '|' || line[12] != ' ' || line[10] != ' ') {
        std::cerr << RED << "Error: Invalid line format: " << line << RESET_COLOR << std::endl;
        return false;
    }
    
    std::string date = line.substr(0, 10);
    std::string valueStr = line.substr(13);

    if (!isValidDate(date)) {
        std::cerr << RED << "Error: Invalid date format: " << date << RESET_COLOR << std::endl;
        return false;
    }

    std::istringstream iss(valueStr);
    double value;
    
    if (!(iss >> value) || !iss.eof()) {
        std::cerr << RED << "Error: Invalid value: " << valueStr << RESET_COLOR << std::endl;
        return false;
    }

    if (value < 0) {
        std::cerr << RED << "Error: Negative value: " << value << RESET_COLOR << std::endl;
        return false;
    }

    if (value > 1000) {
        std::cerr << RED << "Error: Value exceeds 1000: " << value << RESET_COLOR << std::endl;
        return false;
    }

    return true;
}

bool isHeaderLine(const std::string& line) {
    return line == "date | value";
}

void processAndDisplayResults(std::map<std::string, double> dataMap, std::string filename) {
    std::ifstream input(filename.c_str());
    
    if (input.is_open()) {
        std::string line;
        std::getline(input, line);
        if (!isHeaderLine(line)) {
            std::cerr << RED << "Error: Invalid header line: " << line << RESET_COLOR << std::endl;
        }
        while (std::getline(input, line)) {
            if (!processLine(line))
                continue;

            // Extract date and value from the line
            std::string date = line.substr(0, 10);
            std::istringstream iss(line.substr(13));
            double value;
            if (!(iss >> value)) {
                std::cerr << RED << "Error: Invalid value in line: " << line << RESET_COLOR << std::endl;
                continue;
            }

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
    } else {
        std::cerr << RED << "Input error: cannot open file " << filename << RESET_COLOR << std::endl;
        return;
    }
}

int main(int ac, char **av) {
	std::map<std::string, double> dataMap;
    if (ac != 2)
    {
        std::cout << RED << "Usage: ./btc <filename>" << RESET_COLOR << std::endl;
        return (1);
    }
   
    if (!processCSV("./data.csv", dataMap))
        return 1;
    
    processAndDisplayResults(dataMap, av[1]);
    
    return 0;
}