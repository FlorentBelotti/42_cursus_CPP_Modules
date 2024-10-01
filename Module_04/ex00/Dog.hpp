/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:37 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:24:57 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Color.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {

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
		}
		return *this;
	}

	// Functions
	void makeSound() const;
};

#endif
