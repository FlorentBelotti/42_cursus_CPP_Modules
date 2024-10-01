/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:42:57 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:11 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Color.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {

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
		}
		return *this;
	}

	// Functions
	void makeSound() const;
};

#endif
