/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:02:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 11:25:44 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Color.hpp"

#pragma once

class Bureaucrat {

	protected :

	std::string const _name;
	int _grade;

	public :

	// Constructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);

	// Operator
	Bureaucrat& operator=(const Bureaucrat& other);

	// Destructor
	~Bureaucrat();

	// Getters
	std::string getName() const;
	int getGrade() const;

	// Exceptions
	class GradeTooHighException : public std::exception {
		public :
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
		public :
		virtual const char* what() const throw();
	};

	// Methods
	void incrementGrade();
	void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);