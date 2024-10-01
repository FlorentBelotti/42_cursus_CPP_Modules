/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:53:04 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 22:22:22 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Color.hpp"

// Constructor

Ice::Ice() : AMateria("ice") {}

// Redefinitions

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << BLUE << "* Cast Ice on " << target.getName() << " *" << RESET_COLOR << std::endl;
}
