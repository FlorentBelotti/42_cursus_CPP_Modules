/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:51:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/30 16:50:29 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "brain.hpp"

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

	private:
		Brain* brain;  // Utiliser 'brain' en minuscule pour l'attribut d'instance

	public:

	// Constructor
	Dog() : Animal() {
		setType("Dog");
		brain = new Brain();
		std::cout << BLUE << getType() << RESET_COLOR << " created" << RESET_COLOR << std::endl;
	}

	// Copy constructor
	Dog(const Dog& other) : Animal(other) {
		brain = new Brain(*other.brain);
		std::cout << BLUE << getType() << YELLOW << " copied" << RESET_COLOR << std::endl;
	}

	// Destructor
	~Dog() {
		delete brain;
		std::cout << BLUE << getType() << RED << " destroyed" << RESET_COLOR << std::endl;
	}

	// Assignment operator
	Dog& operator=(const Dog& other) {
		if (this != &other) {
			Animal::operator=(other);
			delete brain;
			brain = new Brain(*other.brain);
		}
		return *this;
	}

	// Functions
	void makeSound() const {
	    std::cout << MAGENTA << "The dog goes woof" << RESET_COLOR << std::endl;
	}

	void setBrainIdea(int index, const std::string& idea) {
	    brain->setIdea(index, idea);
	}

	std::string getBrainIdea(int index) const {
	    return brain->getIdea(index);
	}
};

class Cat : public Animal {

	private:

	Brain* brain;

	public:

	// Constructor
	Cat() : Animal() {
		setType("Cat");
		brain = new Brain();
		std::cout << MAGENTA << getType() << RESET_COLOR << " created" << RESET_COLOR << std::endl;
	}

	// Copy constructor
	Cat(const Cat& other) : Animal(other) {
		brain = new Brain(*other.brain);
		std::cout << MAGENTA << getType() << YELLOW << " copied" << RESET_COLOR << std::endl;
	}

	// Destructor
	~Cat() {
		delete brain;
		std::cout << MAGENTA << getType() << RED << " destroyed" << RESET_COLOR << std::endl;
	}
	// Assignment operator
	Cat& operator=(const Cat& other) {
		if (this != &other) {
			Animal::operator=(other);
			delete brain;
			brain = new Brain(*other.brain);
		}
		return *this;
	}

	// Functions
	void makeSound() const {
		std::cout << MAGENTA << "The cat goes Meow" << RESET_COLOR << std::endl;
	}

	void setBrainIdea(int index, const std::string& idea) {
		brain->setIdea(index, idea);
	}

	std::string getBrainIdea(int index) const {
		return brain->getIdea(index);
	}
};

#endif

