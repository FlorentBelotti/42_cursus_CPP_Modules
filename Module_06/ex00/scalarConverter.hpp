/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:51:03 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 17:25:40 by fbelotti         ###   ########.fr       */
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

    // Attributes
    std::string _str;

    // Operator
    ScalarConverter &operator=(ScalarConverter const &rhs);

    public :

    // Methods
    static void convert(std::string const &str);
};