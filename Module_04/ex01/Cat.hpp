/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:42:57 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:14:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Color.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {

	private:

	Brain* brain;

	public:

	// Constructor
	Cat();

	// Copy constructor
	Cat(const Cat& other);

	// Destructor
	~Cat();

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
	void makeSound() const;

	void setBrainIdea(int index, const std::string& idea);

	std::string getBrainIdea(int index) const;
};

#endif
