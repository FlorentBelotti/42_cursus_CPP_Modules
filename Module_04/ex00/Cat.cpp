/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:12:32 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:34 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << CYAN << getType() << GREEN << " created" << RESET_COLOR << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << CYAN << getType() << YELLOW << " copied" << RESET_COLOR << std::endl;
}

// Destructor
Cat::~Cat() {
	std::cout << CYAN << getType() << RED << " destroyed" << RESET_COLOR << std::endl;
}

// Functions
void Cat::makeSound() const {
	std::cout << CYAN << "The cat goes Meow" << RESET_COLOR << std::endl;
}
