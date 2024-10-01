/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:04:39 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:33:39 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructor

AMateria::AMateria(std::string const & type) : _type(type) {};

// Destructor

AMateria::~AMateria() {};

// Getters

std::string const & AMateria::getType() const { return _type; };

// Virtual functions

void AMateria::use(ICharacter& target) {
	std::cout << "Using materia on " << target.getName() << std::endl;
}
