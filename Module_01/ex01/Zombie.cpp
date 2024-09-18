/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:06:51 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 17:17:11 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Constructor(s)

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destructor(s)

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed." << std::endl;
}

// Function(s)

void Zombie::announce() {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

Zombie* zombieHorde(int n, std::string name) {
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		horde[i].setName(name);
	}
	return (horde);
}

int main(void) {
	int	zombie_nb = 10;
	Zombie *horde = zombieHorde(zombie_nb, "Thomas");
	for (int i = 0; i < zombie_nb; i++)
		horde[i].announce();
	delete[] horde;
}
