/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:17:15 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 16:09:19 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// Constructor

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " created.\n";
}

// Destructor

FragTrap::~FragTrap() {
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " is destroy!\n";
}

// Functions

void FragTrap::attack(const std::string& target) {
	if (getEnergyPoints() > 0) {
		std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << MAGENTA << "FragTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
	} else {
		std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " has 0 energy points and can't attack." << std::endl;
	}
}

void FragTrap::highFivesGuy() {
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " request a high fives..." << std::endl;
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " high fives request accepted!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() > 0) {
		std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " repairs himself of " << amount << " hit points " << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << MAGENTA << "FragTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
		setHitPoints(getHitPoints() + amount);
		std::cout << MAGENTA << "FragTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " has 0 energy point and can't attack " << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() > 0) {
		std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " take "<< amount << " points of damage!" << std::endl;
		setHitPoints(getHitPoints() - amount);
		std::cout << MAGENTA << "FragTrap " << getName() << YELLOW << " " << getHitPoints() << " hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		FragTrap::~FragTrap();
		ClapTrap::~ClapTrap();
	}
}
