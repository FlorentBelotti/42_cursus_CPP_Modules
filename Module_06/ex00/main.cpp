/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:18:46 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/11 20:35:07 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Color.hpp"

int main() {
    // Test avec un caractère non numérique
    std::cout << YELLOW << "Test avec un caractère non numérique:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("A");
    std::cout << std::endl;

    // Test avec un entier
    std::cout << YELLOW << "Test avec un entier:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("30");
    std::cout << std::endl;

    // Test avec un flottant
    std::cout << YELLOW << "Test avec un flottant:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("42.42");
    std::cout << std::endl;

    // Test avec un double
    std::cout << YELLOW << "Test avec un double:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("42.4242");
    std::cout << std::endl;

    // Test avec une valeur non numérique
    std::cout << YELLOW << "Test avec une valeur non numérique:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("abc");
    std::cout << std::endl;

    // Test avec une valeur NaN
    std::cout << YELLOW << "Test avec une valeur NaN:" << RESET_COLOR << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;

    // Test avec une valeur infinie
    std::cout << YELLOW << "Test avec une valeur infinie:" << RESET_COLOR <<  std::endl;
    ScalarConverter::convert("inf");
    std::cout << std::endl;

    return 0;
}