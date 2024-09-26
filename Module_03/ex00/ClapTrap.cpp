/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:14:05 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 15:57:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nameInput) : _name(nameInput), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " is destroy!" << std::endl;
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

// Setters

void ClapTrap::setAttackDamage(int dmg) {
	_attackDamage = dmg;
}

void ClapTrap::setHitPoints(int hp) {
	_hitPoints = hp;
}
void ClapTrap::setEnergyPoints(int ep) {
	_energyPoints = ep;
}
void ClapTrap::setName(std::string name) {
	_name = name;
}

// Functions

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints > 0) {
		std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
		std::cout << GREEN << "ClapTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
	}
	else {
		std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " has 0 energy point and can't attack " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0) {
		std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " repairs himself of " << amount << " hit points " << std::endl;
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << getName() << YELLOW << " " << getEnergyPoints() << " energy points remaining." << RESET_COLOR << std::endl;
		std::cout << GREEN << "ClapTrap " << getName() << YELLOW << " " << getHitPoints() << " Hit points remaining." << RESET_COLOR << std::endl;
	}
	else {
		std::cout << GREEN << "ClapTrap " << _name << YELLOW << " has 0 energy point and can't attack " << RESET_COLOR << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints > 0) {
		std::cout << GREEN << "ClapTrap " << _name << RESET_COLOR << " take "<< amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		std::cout << GREEN << "ClapTrap " << getName() << YELLOW << " " << getHitPoints() << " Hit points remaining." << RESET_COLOR << std::endl;
	}
	else
		ClapTrap::~ClapTrap();
}
