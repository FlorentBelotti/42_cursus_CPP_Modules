/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:08:48 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:11:22 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor
Brain::Brain() { std::cout << YELLOW << "Brain" << GREEN << " created" << RESET_COLOR << std::endl; }

// Destructor
Brain::~Brain() { std::cout << YELLOW << "Brain" << RED << " destroyed" << RESET_COLOR << std::endl; }

// Copy Constructor
Brain::Brain(const Brain &other) {
	std::cout << YELLOW << "Brain copied" << RESET_COLOR << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}
}

// Setters
void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
	else
		std::cout << RED << "No room left for another idea" << RESET_COLOR << std::endl;
}

// Getters
std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	std::cout << RED <<  "Usage : use an index between 0 and 100" << RESET_COLOR << std::endl;
	return "";
}
