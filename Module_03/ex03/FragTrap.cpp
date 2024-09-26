/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:17:15 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 17:10:41 by fbelotti         ###   ########.fr       */
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

void FragTrap::highFivesGuy() {
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " request a high fives..." << std::endl;
	std::cout << MAGENTA << "FragTrap " << getName() << RESET_COLOR << " high fives request accepted!" << std::endl;
}
