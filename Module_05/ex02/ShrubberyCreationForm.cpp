/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:53 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 16:47:37 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Methods
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target){
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (getGradeToExecute() <= executor.getGrade())
        throw AForm::GradeTooLowException();
    std::ofstream outfile(_target + "_shrubbery");
    if (!outfile.is_open())
        throw std::ios_base::failure("Failed to open file");
    outfile << "       _-_\n"
            << "    /~~   ~~\\\n"
            << " /~~         ~~\\\n"
            << "{               }\n"
            << " \\  _-     -_  /\n"
            << "   ~  \\\\ //  ~\n"
            << "_- -   | | _- _\n"
            << "  _ -  | |   -_\n";
    outfile.close();
    std::cout << GREEN << _target + "_shrubbery" << " has been successfully created" << RESET_COLOR << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
    if (this != &rhs){
        _target = rhs._target;
    }
    return *this;
}