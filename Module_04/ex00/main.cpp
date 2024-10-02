/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:50:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 14:58:47 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* wrongCat = new WrongCat();

	std::cout << YELLOW << "Animal type is " << BLUE << dog->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << CYAN << cat->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << MAGENTA << meta->getType() << RESET_COLOR << std::endl;
	std::cout << YELLOW << "Animal type is " << RED << wrongCat->getType() << RESET_COLOR << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;
	return 0;
}
