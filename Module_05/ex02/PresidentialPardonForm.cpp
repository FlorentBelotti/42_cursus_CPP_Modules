/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:52 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:47:14 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

// Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    return ;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
    *this = src;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
    return ;
}

// Assignment operator
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);  // Call base class assignment operator
        _target = rhs._target;
    }
    return *this;
}

// Execute method
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (getGradeToExecute() <= executor.getGrade())
        throw AForm::GradeTooLowException();

    std::cout << GREEN << _target << " has been pardoned by Zaphod Beeblebrox." << RESET_COLOR << std::endl;
}