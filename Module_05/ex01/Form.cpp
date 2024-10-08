/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:29:07 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/08 21:47:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructor
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooLowException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw GradeTooHighException();
    }
}

// Copy constructor
Form::Form(const Form& other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

// Operator
Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _signed = other._signed;
    }
    return *this;
}

// Destructor
Form::~Form() {}

// Getters
std::string Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _signed;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

// Exceptions
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

// Methods

void Form::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        std::cout << bureaucrat.getName() << " can't sign " << _name << "form because his grade is too low." << std::endl;
    }
    else if (_signed) {
        std::cout << "The form is already signed" << std::endl;
        return;
    }
    else {
        std::cout << bureaucrat.getName() << " signs " << _name << " form" << std::endl;
        _signed = true;
    }
}

// Friend

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os << obj.getName() << " form is ";
    if (obj.getSigned()) {
        os << "signed";
    } else {
        os << "not signed";
    }
    os << " and require a grade " << obj.getGradeToSign() << " to be signed and a grade " << obj.getGradeToExecute() << " to be executed";
    return os;
}
