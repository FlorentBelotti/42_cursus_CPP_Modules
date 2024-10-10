/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:06:51 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 18:30:43 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"
#include "Color.hpp"

// Constructors
ScalarConverter::ScalarConverter() {
    std::cout << "Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {
    std::cout << "Copy constructor called" << std::endl;
    if (this != &src) {
        _str = src._str;
    }
}

// Destructor
ScalarConverter::~ScalarConverter() {
    std::cout << "Destructor called" << std::endl;
}

// Operator
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) {
        _str = rhs._str;
    }
    return *this;
}

// Methods
static void convert(std::string const &str) {

    if (str.length() == 1 && !isdigit(str[0])) {
        char c = str[0];
        // print conversion
        return ;
    }
    
    try {
        int i = std::stoi(str);
        // print conversion
        return;
    } catch (const std::invalid_argument&) {}
        
    try {
        float f = std::stof(str);
        // print conversion
        return;
    } catch (const std::invalid_argument&) {}
            
    try {
        double d = std::stod(str);
        // print conversion
        return;
    } catch (const std::invalid_argument&) {}
    std::cerr << RED << "Error: invalid input" << RESET_COLOR << std::endl;
}
