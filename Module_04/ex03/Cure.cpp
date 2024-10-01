/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:53:04 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 22:07:05 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Color.hpp"

// Constructor

Cure::Cure() : AMateria("cure") {}

// Redefinitions

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << GREEN << "* Heals " << target.getName() << "'s wounds *" << RESET_COLOR << std::endl;
}
