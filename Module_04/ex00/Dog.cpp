/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:15:37 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:24:43 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
	std::cout << BLUE << getType() << GREEN << " created" << RESET_COLOR << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << BLUE << getType() << YELLOW << " copied" << RESET_COLOR << std::endl;
}

// Destructor
Dog::~Dog() {
	std::cout << BLUE << getType() << RED << " destroyed" << RESET_COLOR << std::endl;
}

// Functions
void Dog::makeSound() const {
	std::cout << MAGENTA << "The dog goes woof" << RESET_COLOR << std::endl;
}
