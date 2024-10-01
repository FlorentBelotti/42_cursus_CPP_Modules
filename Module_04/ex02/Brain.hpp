/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:53:58 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/01 16:11:33 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Color.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {

	private:

	std::string ideas[100];

	public:

	// Constructor
	Brain();

	// Destructor
	~Brain();

	// Copy Constructor
	Brain(const Brain &other);

	// Assignment Operator
	Brain& operator=(const Brain &other) {
		std::cout << YELLOW << "Brain assigned" << RESET_COLOR << std::endl;
		if (this != &other) {
			for (int i = 0; i < 100; i++) {
				ideas[i] = other.ideas[i];
			}
		}
		return *this;
	}

	// Setters
	void setIdea(int index, const std::string& idea);

	// Getters
	std::string getIdea(int index) const;
};

#endif
