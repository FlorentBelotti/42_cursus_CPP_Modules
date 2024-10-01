/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:39:56 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:43:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Color.hpp"

// Constructor

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

// Destructor

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		delete inventory[i];
	}
}

// Getters

std::string const & Character::getName() const {
	return name;
}

// Functions

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
		inventory[idx]->use(target);
	}
}
