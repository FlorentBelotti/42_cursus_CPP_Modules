/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:12:32 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 14:52:32 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : Animal() {
	setType("WrongCat");
	std::cout << RED << getType() << GREEN << " created" << RESET_COLOR << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other) : Animal(other) {
	std::cout << RED << getType() << YELLOW << " copied" << RESET_COLOR << std::endl;
}

// Destructor
WrongCat::~WrongCat() {
	std::cout << RED << getType() << RED << " destroyed" << RESET_COLOR << std::endl;
}
