/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:28:55 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/23 12:12:49 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Color.hpp"
#include <iostream>

int main(void) {
    try {
        Array<int> defaultArray;
        std::cout << YELLOW << "Size of defaultArray" << " : " << RESET_COLOR << defaultArray.size() << std::endl;

        Array<int> paramArray(5);
        std::cout << YELLOW << "Size of paramArray" << " : " << RESET_COLOR << paramArray.size() << std::endl;

        for (unsigned int i = 0; i < paramArray.size(); ++i) {
            paramArray[i] = i * 10;
        }

        std::cout << BLUE << "Elements of paramArray: " << RESET_COLOR;
        for (unsigned int i = 0; i < paramArray.size(); ++i) {
            std::cout << paramArray[i] << ", ";
        }
        std::cout << std::endl;

        Array<int> copyArray(paramArray);
        std::cout << YELLOW << "Size of copyArray" << " : " << RESET_COLOR << copyArray.size() << std::endl;

        std::cout << MAGENTA << "Elements of copyArray: " << RESET_COLOR;
        for (unsigned int i = 0; i < copyArray.size(); ++i) {
            std::cout << copyArray[i] << ", ";
        }
        std::cout << std::endl;

        paramArray[0] = 100;
        std::cout << BLUE << "Modified paramArray[0]: " << RESET_COLOR << paramArray[0] << std::endl;
        std::cout << MAGENTA << "Unmodified copyArray[0]: " << RESET_COLOR << copyArray[0] << std::endl;

        std::cout << RED << "Attempting out-of-bounds access: " << RESET_COLOR;
        std::cout << paramArray[10] << std::endl; // This should throw an exception

    } catch (const std::exception& e) {
        std::cerr << RESET_COLOR << "Exception: " << e.what() << RESET_COLOR << std::endl;
    }
    return 0;
}