/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:08:19 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:53:00 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Bureaucrat JohnSmith("John Smith", 42);
        Bureaucrat HighRank("High Rank", 1);
        Bureaucrat LowRank("Low Rank", 150);
        Intern someIntern;

        // Intern creation tests
        AForm* shrubberyForm = someIntern.makeForm("shrubbery creation", "Form_24601");
        AForm* robotomyForm = someIntern.makeForm("robotomy request", "Captain Picard");
        AForm* pardonForm = someIntern.makeForm("presidential pardon", "Richard Nixon");
        AForm* unknownForm = someIntern.makeForm("Unform", "John Smith");

        // Form tests
        std::cout << "\n----- Testing ShrubberyCreationForm -----\n" << std::endl;
        if (shrubberyForm) {
            try {
                std::cout << "Attempting to sign ShrubberyCreationForm with HighRank..." << std::endl;
                shrubberyForm->beSigned(HighRank);
                std::cout << YELLOW << *shrubberyForm << RESET_COLOR << std::endl;
                std::cout << "Attempting to execute ShrubberyCreationForm with HighRank..." << std::endl;
                shrubberyForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
            }
            delete shrubberyForm;
        }
        std::cout << "\n----- Testing RobotomyRequestForm -----\n" << std::endl;
        if (robotomyForm) {
            try {
                std::cout << "Attempting to sign RobotomyRequestForm with HighRank..." << std::endl;
                robotomyForm->beSigned(HighRank);
                std::cout << YELLOW << *robotomyForm << RESET_COLOR << std::endl;
                std::cout << "Attempting to execute RobotomyRequestForm with HighRank..." << std::endl;
                robotomyForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
            }
            delete robotomyForm;
        }
        std::cout << "\n----- Testing PresidentialPardonForm -----\n" << std::endl;
        if (pardonForm) {
            try {
                std::cout << "Attempting to sign PresidentialPardonForm with HighRank..." << std::endl;
                pardonForm->beSigned(HighRank);
                std::cout << YELLOW << *pardonForm << RESET_COLOR << std::endl;
                std::cout << "Attempting to execute PresidentialPardonForm with HighRank..." << std::endl;
                pardonForm->execute(HighRank);
            } catch (std::exception &e) {
                std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
            }
            delete pardonForm;
        }
        std::cout << "\n----- Testing unknown form -----\n" << std::endl;
        if (unknownForm) {
            std::cerr << RED << "Error: unknown form should not have been created." << RESET_COLOR << std::endl;
            delete unknownForm;
        } else {
            std::cout << "Unknown form creation correctly handled." << std::endl;
        }
    } catch (std::exception &e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    return 0;
}