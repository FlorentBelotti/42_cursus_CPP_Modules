/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:08:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 18:11:31 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (this->weapon) {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	} else {
		std::cout << this->name << " has no weapon to attack with!" << std::endl;
	}
}
