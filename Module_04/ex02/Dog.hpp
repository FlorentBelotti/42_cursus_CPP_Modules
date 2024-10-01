/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:37 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:18:18 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Color.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {

	private:
		Brain* brain;

	public:

	// Constructor
	Dog();

	// Copy constructor
	Dog(const Dog& other);

	// Destructor
	~Dog();

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
	void makeSound() const;

	void setBrainIdea(int index, const std::string& idea);

	std::string getBrainIdea(int index) const;
};

#endif
