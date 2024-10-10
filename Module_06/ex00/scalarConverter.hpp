/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:51:03 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 17:14:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#pragma once

class ScalarConverter {
    
    private :
    
    // Constructors
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);

    // Destructor
    ~ScalarConverter();

    // Operator
    ScalarConverter &operator=(ScalarConverter const &rhs);

    // Attributes
    std::string _str;

    public :

    // Methods
    static void convert(std::string const &str);
};