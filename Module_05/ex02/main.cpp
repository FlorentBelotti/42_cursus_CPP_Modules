/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:08:19 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:15:29 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Création des bureaucrates
        Bureaucrat JohnSmith("John Smith", 42);
        Bureaucrat HighRank("High Rank", 1);
        Bureaucrat LowRank("Low Rank", 150);

        // Création des formulaires
        ShrubberyCreationForm shrubberyForm("Form_24601");
        RobotomyRequestForm robotomyForm("Captain Picard");
        PresidentialPardonForm pardonForm("Richard Nixon");

        // Test de la signature et de l'exécution des formulaires
        std::cout << "Trying to execute ShrubberyCreationForm with LowRank:" << std::endl;
        try {
            shrubberyForm.beSigned(LowRank);
            shrubberyForm.execute(LowRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

        std::cout << "Trying to execute ShrubberyCreationForm with HighRank:" << std::endl;
        try {
            shrubberyForm.beSigned(HighRank);
            shrubberyForm.execute(HighRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

        std::cout << "Trying to execute RobotomyRequestForm with LowRank:" << std::endl;
        try {
            robotomyForm.beSigned(LowRank);
            robotomyForm.execute(LowRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

        std::cout << "Trying to execute RobotomyRequestForm with HighRank:" << std::endl;
        try {
            robotomyForm.beSigned(HighRank);
            robotomyForm.execute(HighRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

        std::cout << "Trying to execute PresidentialPardonForm with LowRank:" << std::endl;
        try {
            pardonForm.beSigned(LowRank);
            pardonForm.execute(LowRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

        std::cout << "Trying to execute PresidentialPardonForm with HighRank:" << std::endl;
        try {
            pardonForm.beSigned(HighRank);
            pardonForm.execute(HighRank);
        } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
        }

    } catch (std::exception &e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    return 0;
}