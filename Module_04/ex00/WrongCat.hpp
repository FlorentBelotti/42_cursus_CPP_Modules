/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:42:57 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 14:58:09 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Color.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public Animal {

	public:

	// Constructor
	WrongCat();

	// Copy constructor
	WrongCat(const WrongCat& other);

	// Destructor
	~WrongCat();

	// Assignment operator
	WrongCat& operator=(const WrongCat& other) {
		if (this != &other) {
			Animal::operator=(other);
		}
		return *this;
	}
};

#endif
