/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:10 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/25 16:39:17 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    {
        ClapTrap attacker("Attacker");
        std::cout << "\n--- Attack Test ---" << std::endl;
        attacker.attack("Enemy");
        attacker.takeDamage(10);
    }

    {
        ClapTrap repairer("Repairer");
        std::cout << "\n--- Repair Test ---" << std::endl;
        repairer.takeDamage(5);
        repairer.beRepaired(5);
        repairer.takeDamage(5);
        repairer.takeDamage(5);
    }

    {
        ClapTrap damageTaker("DamageTaker");
        std::cout << "\n--- Damage Taking Test ---" << std::endl;
        damageTaker.takeDamage(3);
        damageTaker.takeDamage(3);
        damageTaker.takeDamage(4);
    }

    return 0;
}





