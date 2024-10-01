/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:50:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:26:32 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << YELLOW << "Animal type is " << BLUE << dog->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << CYAN << cat->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << MAGENTA << meta->getType() << RESET_COLOR << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	return 0;
}
