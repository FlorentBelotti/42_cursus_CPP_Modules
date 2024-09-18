/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:06:51 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 16:55:44 by fbelotti         ###   ########.fr       */
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

Zombie* newZombie( std::string name ) {
	Zombie *New_zombie = new Zombie(name);
	return New_zombie;
}

void randomChump( std::string name )
{
	Zombie randomZombie(name);
	randomZombie.announce();
}

int main(void) {
	Zombie *heap_zombie = newZombie("heap_zombie");
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("stack_zombie");
}
