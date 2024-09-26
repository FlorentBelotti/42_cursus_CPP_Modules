/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 16:08:41 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap scav("Guardian");
	FragTrap frag("HighFivesGuy");
	scav.attack("Intruder");
	frag.attack("Enemy");
	scav.attack("Intruder");
	frag.attack("Enemy");
	scav.guardGate();
	frag.highFivesGuy();
	scav.takeDamage(30);
	frag.takeDamage(30);
	scav.beRepaired(20);
	frag.beRepaired(20);
	return 0;
}
