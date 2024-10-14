/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:59:42 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/14 17:58:33 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* Generate() {
    std::srand(std::time(0));
    int random = std::rand() % 3;
    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p) {
    std::cout << "\n----- Pointer conversion -----" << std::endl;
    if (dynamic_cast<A*>(p))
        std::cout << YELLOW << "Pointer type A detected" << RESET_COLOR << std::endl;
    else
        std::cout << RED << "Can't convert adress to A&" << RESET_COLOR << std::endl;

    if (dynamic_cast<B*>(p))
        std::cout << MAGENTA << "Pointer type B detected" << RESET_COLOR << std::endl;
    else
        std::cout << RED << "Can't convert adress to B&" << RESET_COLOR << std::endl;

    if (dynamic_cast<C*>(p))
        std::cout << BLUE << "Pointer type C detected" << RESET_COLOR << std::endl;
    else
        std::cout << RED << "Can't convert adress to C&" << RESET_COLOR << std::endl;
}

void identify(Base& p) {
    std::cout << "\n----- Adress conversion -----" << std::endl;
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << YELLOW << "Adress type A detected" << RESET_COLOR << std::endl;
    } catch (...) {
        std::cout << RED << "Can't convert adress to A&" << RESET_COLOR << std::endl; }

    try {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << MAGENTA << "Adress type B detected" << RESET_COLOR << std::endl;
    } catch (...) {
        std::cout << RED << "Can't convert adress to B&" << RESET_COLOR << std::endl; }

    try {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << BLUE << "Adress type C detected" << RESET_COLOR << std::endl;
    } catch (...) {
        std::cout << RED << "Can't convert adress to C&" << RESET_COLOR << std::endl; }
}
