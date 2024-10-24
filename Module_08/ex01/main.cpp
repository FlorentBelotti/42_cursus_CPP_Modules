/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:20:42 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 00:09:55 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Color.hpp"

void initializeRandom() {
    std::srand(static_cast<unsigned int>(std::time(0)));
}

unsigned int getRandomUnsignedInt() {
    return static_cast<unsigned int>(std::rand());
}

unsigned int convert_to_unsigned_int(const char* str) {
    char *end;
    long n = std::strtol(str, &end, 10);

    if (*end != '\0' || n < 0 || n > UINT_MAX) {
        throw std::runtime_error("Invalid number or out of bound");
    }

    return static_cast<unsigned int>(n);
}

int main(int ac, char **av) {
    
    if (ac < 2 || ac > 2) {
        std::cout << RED << "Usage: ./span number" << RESET_COLOR << std::endl;
        return 0;
    }

    unsigned int n;
    try {
        n = convert_to_unsigned_int(av[1]);
    } catch (std::exception &e) {
        std::cout << RED << "Error : out of bound" << RESET_COLOR << std::endl;
        return 0;
    }

    initializeRandom();
    Span span(n);
    for (unsigned int i = 0; i < n; i++) {
        span.addNumber(getRandomUnsignedInt());
    }
    
    try {
        span.shortestSpan();
        span.longestSpan();
    } catch (std::exception &e) {
        std::cout << RED << "Error: not enough numbers" << RESET_COLOR << std::endl;
    }
    
    try {
        span.addNumber(42);
    } catch (std::exception &e) {
        std::cout << RED << "Error: too many numbers" << RESET_COLOR << std::endl;
    }
}
