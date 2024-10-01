/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:05:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:08:15 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor
Animal::Animal() : type("Chimera") { std::cout << MAGENTA << "Chimera" << GREEN << " created" << RESET_COLOR << std::endl; }

// Destructor
Animal::~Animal() { std::cout << MAGENTA << "Chimera" << RED << " destroyed" << RESET_COLOR << std::endl; }

// Getters
std::string Animal::getType() const { return type; }

// Setters
void Animal::setType(std::string name) { type = name; }

// Functions
void Animal::makeSound() const {
	std::cout << GREEN << "The chimera goes Eduardo" << RESET_COLOR << std::endl;
}
