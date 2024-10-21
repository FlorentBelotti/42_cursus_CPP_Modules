/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:19:18 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/21 12:56:21 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

template <typename Value>
void swap(Value &x, Value &y) {
    Value temp = x;
    x = y;
    y = temp;
}

template <typename Value>
Value min(Value x, Value y) {
    if (x < y)
        return x;
    else
        return y;
}

template <typename Value>
Value max(Value x, Value y) {
    if (x > y)
        return x;
    else
        return y;
}