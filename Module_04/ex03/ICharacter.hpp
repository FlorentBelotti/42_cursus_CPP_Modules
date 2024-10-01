/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:20:39 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:36:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class AMateria;

class ICharacter {

	public:

	// Constructor
	virtual ~ICharacter() {}

	// Getters
	virtual std::string const & getName() const = 0;

	// Functions
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
