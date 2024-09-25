/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/25 16:01:07 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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

	// Functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
