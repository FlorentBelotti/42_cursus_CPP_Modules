/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:53:58 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/30 16:53:13 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {

	private:

	std::string ideas[100];

	public:

	// Constructor
	Brain() { std::cout << "Brain created" << std::endl; }

	// Destructor
	~Brain() { std::cout << "Brain destroyed" << std::endl; }

	// Copy Constructor
	Brain(const Brain &other) {
		std::cout << "Brain copied" << std::endl;
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}

	// Assignment Operator
	Brain& operator=(const Brain &other) {
		std::cout << "Brain assigned" << std::endl;
		if (this != &other) {
			for (int i = 0; i < 100; i++) {
				ideas[i] = other.ideas[i];
			}
		}
		return *this;
	}

	// Setters
	void setIdea(int index, const std::string& idea) {
		if (index >= 0 && index < 100) {
			ideas[index] = idea;
		}
		else
			std::cout << "No room left for another idea" << std::endl;
	}

	// Getters
	std::string getIdea(int index) const {
		if (index >= 0 && index < 100) {
			return ideas[index];
		}
		std::cout << "Usage : use an index between 0 and 100" << std::endl;
		return "";
	}
};

#endif
