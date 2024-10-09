/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:27:25 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:35:14 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <map>

// Constructor
Intern::Intern() {
    return ;
}

// Copy constructor
Intern::Intern(Intern const &src) {
    *this = src;
}

// Destructor
Intern::~Intern() {
    return ;
}

// Assignment operator
Intern &Intern::operator=(Intern const &rhs) {
    (void)rhs;
    return *this;
}

AForm* createShrubberyCreationForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyRequestForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

AForm* createPresidentialPardonForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}

// Function to create forms
AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm* (*formCreators[3])(const std::string&) = {
		createShrubberyCreationForm,
		createRobotomyRequestForm,
		createPresidentialPardonForm
	};
	for (int i = 0; i < 3; i++) {
		if (formNames[i] == formName) {
			std::cout << GREEN << "Intern creates " << formName << RESET_COLOR << std::endl;
			return formCreators[i](target);
		}
	}
	std::cout << RED << "Error: Form '" << formName << "' does not exist." << RESET_COLOR << std::endl;
	return NULL;
}