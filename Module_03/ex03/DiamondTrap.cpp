/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:02:11 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 17:14:02 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << getName() << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << getName() << " destroyed." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	if (getEnergyPoints() > 0) {
		std::cout << ORANGE << "DiamondTrap " << getName() << RESET_COLOR << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << ORANGE << "DiamondTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
	} else {
		std::cout << ORANGE << "DiamondTrap " << getName() << RESET_COLOR << " has 0 energy points and can't attack." << std::endl;
	}
}

void DiamondTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() > 0) {
		std::cout << ORANGE << "DiamondTrap " << getName() << RESET_COLOR << " repairs himself of " << amount << " hit points " << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << ORANGE << "DiamondTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
		setHitPoints(getHitPoints() + amount);
		std::cout << ORANGE << "DiamondTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		std::cout << ORANGE << "DiamondTrap " << getName() << RESET_COLOR << " has 0 energy point and can't attack " << std::endl;
	}
}

void DiamondTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() > 0) {
		std::cout << ORANGE << "DiamondTrap " << getName() << RESET_COLOR << " take "<< amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() - amount);
		std::cout << ORANGE << "DiamondTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		DiamondTrap::~DiamondTrap();
		ClapTrap::~ClapTrap();
	}
}
