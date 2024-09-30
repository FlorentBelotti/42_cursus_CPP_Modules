/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:51:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/30 15:10:27 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

const char* const RED = "\033[31m";
const char* const GREEN = "\033[32m";
const char* const YELLOW = "\033[33m";
const char* const BLUE = "\033[34m";
const char* const MAGENTA = "\033[35m";
const char* const CYAN = "\033[36m";
const char* const RESET_COLOR = "\033[0m";

class Animal {

	protected:

	std::string type;

	public:

	// Constructor
	Animal() : type("Chimera") {}

	// Destructor
	virtual ~Animal() { std::cout << GREEN << "Chimera" << RED << " destroyed" << RESET_COLOR << std::endl; }

	// Getters
	std::string getType() const { return type; }

	// Setters
	void setType(std::string name) { type = name; }

	// Functions
	virtual void makeSound() const {
		std::cout << GREEN << "The chimera goes Eduardo" << RESET_COLOR << std::endl;
	}
};

class Dog : public Animal {

	public:

	// Constructor
	Dog() { setType("Dog"); }

	// Destructor
	~Dog() { std::cout << BLUE << getType() << RED << " destroyed" << RESET_COLOR << std::endl; }

	// Functions
	void makeSound() const {
		std::cout << BLUE << "The dog goes Woof" << RESET_COLOR << std::endl;
	}
};

class Cat : public Animal {

	public:

	// Constructor
	Cat() { setType("Cat"); }

	// Destructor
	~Cat() { std::cout << MAGENTA << getType() << RED << " destroyed" << RESET_COLOR << std::endl; }

	// Functions
	void makeSound() const {
		std::cout << MAGENTA << "The cat goes Meow" << RESET_COLOR << std::endl;
	}
};

#endif
