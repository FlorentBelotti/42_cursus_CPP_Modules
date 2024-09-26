/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:17:15 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 17:11:57 by fbelotti         ###   ########.fr       */
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

void ScavTrap::guardGate() {
	std::cout << BLUE << "ScavTrap " << getName() << RESET_COLOR << " is now in Gate Keeper mode." << std::endl;
}
