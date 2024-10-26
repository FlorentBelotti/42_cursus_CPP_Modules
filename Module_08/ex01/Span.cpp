/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:58:52 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/26 12:42:30 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Color.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &src) {
    *this = src;
}

Span::~Span() {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _n = other._n;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (_numbers.size() >= _n)
        throw std::exception();
    _numbers.push_back(number);
}

int Span::shortestSpan() {

    if (_numbers.size() <= 1)
        throw std::exception();

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];

    int num1 = sorted[0];
    int num2 = sorted[1];
    for (size_t i = 1; i < sorted.size(); i++) {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < shortest) {
            shortest = diff;
            num1 = sorted[i - 1];
            num2 = sorted[i];
        }
    }
	std::cout << YELLOW << "\n----- Shortest Span -----\n" << RESET_COLOR << std::endl;
    std::cout << GREEN << "Shortest span is between " << num1 << " and " << num2 << std::endl;
    std::cout << GREEN << "Shortest span: " << RESET_COLOR << shortest << std::endl;
    return shortest;
}

int Span::longestSpan() {

    if (_numbers.size() <= 1)
        throw std::exception();

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
	std::cout << YELLOW << "\n----- Longest Span -----\n" << RESET_COLOR << std::endl;
    std::cout << GREEN << "Longest span is between " << sorted.size() - 1 << " and " << sorted[0] << std::endl;
    std::cout << GREEN << "Longest span: " << RESET_COLOR << sorted[sorted.size() - 1] - sorted[0] << std::endl;
    return sorted[sorted.size() - 1] - sorted[0];
}
