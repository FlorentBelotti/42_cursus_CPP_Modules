/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:17:15 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 15:51:41 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Constructor

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " created.\n";
}

// Destructor

ScavTrap::~ScavTrap() {
	std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " is destroy!\n";
}

// Functions

void ScavTrap::attack(const std::string& target) {
	if (getEnergyPoints() > 0) {
		std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << BLUE << "ScavTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
	} else {
		std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " has 0 energy points and can't attack." << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() > 0) {
		std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " repairs himself of " << amount << " hit points " << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << BLUE << "ScavTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
		setHitPoints(getHitPoints() + amount);
		std::cout << BLUE << "ScavTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " has 0 energy point and can't attack " << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() > 0) {
		std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " take "<< amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() - amount);
		std::cout << BLUE << "ScavTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		ScavTrap::~ScavTrap();
		ClapTrap::~ClapTrap();
	}
}
