/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:51:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:32:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Color.hpp"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {

	protected:

	std::string type;

	public:

	// Constructor
	Animal();

	// Destructor
	virtual ~Animal();

	// Getters
	std::string getType() const;

	// Setters
	void setType(std::string name);

	// Functions
	virtual void makeSound() const = 0;
};

#endif
