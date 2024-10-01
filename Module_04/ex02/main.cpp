/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:50:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:35:49 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
	return 0;
}

