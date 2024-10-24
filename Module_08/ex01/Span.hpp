/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:57:02 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/24 20:20:20 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <climits>

#pragma once

class Span {
    private:
    unsigned int _n;
    std::vector<int> _numbers;

    public:
    Span(unsigned int n);
    Span(const Span &src);
    ~Span();
    Span &operator=(const Span &other);

    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};