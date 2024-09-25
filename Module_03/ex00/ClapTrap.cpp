/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:14:05 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/25 16:28:22 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nameInput) : _name(nameInput), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << "ClapTrap : " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " is destroy!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_name = other.getName();
		_attackDamage = other.getAttackDamage();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
	}
	return *this;
}

// Getters

int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

std::string ClapTrap::getName() const {
	return _name;
}

// Functions

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else {
		std::cout << "ClapTrap " << this->_name << " has 0 energy point and can't attack " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " repairs himself of " << amount << " hit points " << std::endl;
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
	}
	else {
		std::cout << "ClapTrap " << this->_name << " has 0 energy point and can't attack " << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " take "<< amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		ClapTrap::~ClapTrap();
}
