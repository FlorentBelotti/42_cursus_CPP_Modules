/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:54 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:59:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    return ;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
    *this = src;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
    return ;
}

// Assignment operator
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);  // Call base class assignment operator
        _target = rhs._target;
    }
    return *this;
}

// Execute method
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (getGradeToExecute() <= executor.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << YELLOW << "Drilling noises..." << RESET_COLOR << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << GREEN << _target << " has been robotomized successfully." << RESET_COLOR << std::endl;
    else
        std::cout << RED << "The robotomy failed." << RESET_COLOR << std::endl;
}
