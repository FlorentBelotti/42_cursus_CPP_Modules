/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:50:31 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/29 15:59:37 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nom du programme : RPN

Container choisit : stack

Objectif : Traiter une expression mathematique avec les operateurs "+ - / *" sans parenthese et nombres decimaux et afficher le resultat correct.

Entree du programme : une expression mathematique en notation polonaise inverse, les chiffres utilises dans cette operation sont toujours inferieurs a 10, le calcul et le resultat ne tiennent pas compte de cette regle.

Exemple d'une notation polonaise inverse : 3 4 + 2 *

Si la date n'est pas presente dans la base de donnee, le programme doit utiliser la valeur la plus proche de la date donnee, lorsque c'est possible la date precedente.

*/

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include "Color.hpp"

bool isOperator(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

bool isNumber(const std::string& token) {
    for (size_t i = 0; i < token.size(); ++i) {
        if (!std::isdigit(token[i])) return false;
    }
    return true;
}

bool checkExpression(const std::string& expression) {

    std::istringstream iss(expression);
    std::stack<int> stack;
    std::string strToken;
    int intToken;

    while (iss >> strToken) {

        if (isNumber(strToken)) {
            std::stringstream ss(strToken);
            ss >> intToken;
            if (intToken >= 10) {
                std::cerr << RED << "Error: Number must be less than 10" << RESET_COLOR << std::endl;
                return false;
            }
            stack.push(intToken);
        }

        else if (isOperator(strToken)) {
            if (stack.size() < 2) {
                std::cerr << RED << "Error: Not enough numbers for operator" << RESET_COLOR << std::endl;
                return false;
            }
            stack.pop();
            stack.pop();
            stack.push(0);
        }

        else {
            std::cerr << RED << "Error: Invalid token" << RESET_COLOR << std::endl;
            return false;
        }
    }

    if (stack.size() > 1) {
        std::cerr << RED << "Error: Too many numbers" << RESET_COLOR << std::endl;
        return false;
    }

    return true;

}

int SolveBdeWits(const std::string& expression) {

    std::istringstream iss(expression);
    std::stack<int> stack;
    std::string strToken;
    int intToken;

    while (iss >> strToken) {

        if (isNumber(strToken)) {
            std::stringstream ss(strToken);
            ss >> intToken;
            stack.push(intToken);
        }

        else if (isOperator(strToken)) {

            int b = stack.top();
            stack.pop();

            int a = stack.top();
            stack.pop();

            if (strToken == "+")
                stack.push(a + b);
            else if (strToken == "-")
                stack.push(a - b);
            else if (strToken == "*")
                stack.push(a * b);
            else if (strToken == "/")
                stack.push(a / b);
        }
    }
    return stack.top();
}

int main(int ac, char **av) {

    if (ac != 2) {
        std::cerr << RED << "Usage: ./RPN \"3 4 + 2 *\"" << RESET_COLOR << std::endl;
        return 1;
    }

    std::string expression = av[1];

    if (checkExpression(expression)) {
        int result = SolveBdeWits(expression);
        std::cout << YELLOW << "Result: " << RESET_COLOR << result << std::endl;
    }
}
