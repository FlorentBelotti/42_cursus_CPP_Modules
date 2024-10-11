/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:06:51 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/11 20:47:38 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Color.hpp"
#include <stdexcept>
#include <iomanip>
#include <cmath>
#include <climits>
#include <sstream>

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

int stringToInt(const std::string &str) {
    std::stringstream ss(str);
    int result;
    ss >> result;
    if (ss.fail() || !ss.eof()) {
        throw std::invalid_argument("Invalid argument for int conversion");
    }
    return result;
}

float stringToFloat(const std::string &str) {
    std::stringstream ss(str);
    float result;
    ss >> result;
    if (ss.fail() || !ss.eof()) {
        throw std::invalid_argument("Invalid argument for float conversion");
    }
    return result;
}

double stringToDouble(const std::string &str) {
    std::stringstream ss(str);
    double result;
    ss >> result;
    if (ss.fail() || !ss.eof()) {
        throw std::invalid_argument("Invalid argument for double conversion");
    }
    return result;
}

// Methods
void ScalarConverter::convert(const std::string &str) {
    bool conversionSuccess = false;
    std::string errorMessages;

    if (str.length() == 1 && !isdigit(str[0])) {
        char c = str[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }
    else
        errorMessages += "Invalid argument for char conversion\n";
    
    try {
        int i = stringToInt(str);
        if (i < 32 || i > 126)
            std::cout << "char: " << RED << "ASCII value is not printable" << RESET_COLOR << std::endl;
        else
            std::cout << "char: " << "'" << static_cast<char>(i) << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
        conversionSuccess = true;
    } catch (const std::invalid_argument& e) {
        errorMessages += std::string(e.what()) + "\n";
    } catch (const std::out_of_range&) {
        errorMessages += "Error: out of range for int conversion\n";
    }
        
    if (!conversionSuccess) {
        try {
            float f = stringToFloat(str);
            if (f < 32 || f > 126 || std::isnan(f))
                std::cout << "char: " << RED << "ASCII value is not printable" << RESET_COLOR << std::endl;
            else
                std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(f) << std::endl;
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << std::endl;
            conversionSuccess = true;
        } catch (const std::invalid_argument& e) {
            errorMessages += std::string(e.what()) + "\n";
        } catch (const std::out_of_range&) {
            errorMessages += "Error: out of range for float conversion\n";
        }
    }
            
    if (!conversionSuccess) {
        try {
            double d = stringToDouble(str);
            if (d < 32 || d > 126 || std::isnan(d))
                std::cout << "char: " << RED << "ASCII value is not printable" << RESET_COLOR << std::endl;
            else
                std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
            std::cout << "int: ";
            if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
                std::cout << RED << "Out of bound" << RESET_COLOR << std::endl;
            else
                std::cout << static_cast<int>(d) << std::endl;
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
            conversionSuccess = true;
        } catch (const std::invalid_argument& e) {
            errorMessages += std::string(e.what()) + "\n";
        } catch (const std::out_of_range&) {
            errorMessages += "Error: out of range for double conversion\n";
        }
    }
    
    if (!conversionSuccess) {
        std::cerr << RED << errorMessages << RESET_COLOR << std::endl;
    }
}