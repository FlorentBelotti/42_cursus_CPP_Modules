/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:26:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/21 13:10:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Color.hpp"

int main(void) {
    
    int x = 42;
    int y = 33;
    char a = 65;
    char b = 66;

    std::cout << YELLOW << "\n----- INT VALUE -----" << RESET_COLOR << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << YELLOW << "\n----- INT MIN && MAX -----" << RESET_COLOR << std::endl;
    std::cout << "min = " << min(x, y) << std::endl;
    std::cout << "max = " << max(x, y) << std::endl;
    std::cout << YELLOW << "\n----- SWAP INT -----" << RESET_COLOR << std::endl;
    ::swap(x, y);
    std::cout << "swap x = " << x << std::endl;
    std::cout << "swap y = " << y << std::endl;

    std::cout << BLUE << "\n----- CHAR VALUE -----" << RESET_COLOR << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << BLUE << "\n----- CHAR MIN && MAX -----" << RESET_COLOR << std::endl;
    std::cout << "min = " << min(a, b) << std::endl;
    std::cout << "max = " << max(a, b) << std::endl;
    std::cout << BLUE << "\n----- SWAP CHAR -----" << RESET_COLOR << std::endl;
    ::swap(a, b);
    std::cout << "swap a = " << a << std::endl;
    std::cout << "swap b = " << b << std::endl;
}