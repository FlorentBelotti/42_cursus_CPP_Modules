/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 17:08:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dt("JEAN-VALJEAN");
	dt.attack("the air");
	dt.takeDamage(30);
	dt.beRepaired(20);
	dt.guardGate();
	dt.highFivesGuy();
	dt.whoAmI();
	return 0;
}
