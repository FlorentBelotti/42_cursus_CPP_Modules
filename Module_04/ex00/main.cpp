/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:50:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/30 15:09:33 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << YELLOW << "Animal type is " << BLUE << dog->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << MAGENTA << cat->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << GREEN << meta->getType() << RESET_COLOR << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	return 0;
}
