/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:19:18 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/22 17:55:51 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Color.hpp"

#pragma once

template <typename Value>
void print_test(Value &x) {
    std::cout << "Value is :" << YELLOW << x << RESET_COLOR << std::endl;
}

template <typename Value>
void add_one(Value &x) {
    x++;
}

template <typename Value>
void iter(Value* arr, size_t len, void (*func)(Value&)) {
    for (size_t i = 0; i < len; ++i) {
        func(arr[i]);
    }    
}