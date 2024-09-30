/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:50:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/30 16:56:56 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

int main() {
	Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	dynamic_cast<Dog*>(animals[0])->setBrainIdea(0, "Chase the ball");
	dynamic_cast<Cat*>(animals[2])->setBrainIdea(0, "Catch the mouse");
	std::cout << "idea of " << (animals[1])->getType() << " : " << dynamic_cast<Dog*>(animals[1])->getBrainIdea(0) << std::endl;
	std::cout << "idea of " << (animals[0])->getType() << " : " << dynamic_cast<Dog*>(animals[0])->getBrainIdea(0) << std::endl;
	std::cout << "idea of " << (animals[2])->getType() << " : " <<  dynamic_cast<Cat*>(animals[2])->getBrainIdea(0) << std::endl;
	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}
	return 0;
}
