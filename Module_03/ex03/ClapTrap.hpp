/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 17:13:36 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

const char* const RED = "\033[31m";
const char* const GREEN = "\033[32m";
const char* const YELLOW = "\033[33m";
const char* const ORANGE = "\033[93m";
const char* const BLUE = "\033[34m";
const char* const MAGENTA = "\033[35m";
const char* const CYAN = "\033[36m";
const char* const RESET_COLOR = "\033[0m";

class ClapTrap {

	private:

	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	public:

	// Constructor
	ClapTrap(std::string nameInput);

	// Constructor copy
	ClapTrap(const ClapTrap &copy);

	// Operator
	ClapTrap &operator=(const ClapTrap &other);

	// Destructor
	~ClapTrap();

	// Getters
	int getAttackDamage() const ;
	int getHitPoints() const ;
	int getEnergyPoints() const ;
	std::string getName() const ;

	// Setters
	void setAttackDamage(int dmg) ;
	void setHitPoints(int hp) ;
	void setEnergyPoints(int ep) ;
	void setName(std::string name) ;

	// Functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
