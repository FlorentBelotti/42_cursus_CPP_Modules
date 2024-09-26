/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/26 15:39:34 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap scav("Guardian");
	scav.attack("Intruder");
	scav.attack("Intruder");
	scav.guardGate();
	scav.takeDamage(30);
	scav.beRepaired(20);
	return 0;
}
