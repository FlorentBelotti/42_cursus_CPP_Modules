/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:31:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/08 15:54:24 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat ToLow("John Doe", 0);
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    try {
        Bureaucrat ToHigh("Jane Doe", 151);
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    Bureaucrat JohnSmith("John Smith", 42);
    std::cout << YELLOW << JohnSmith << RESET_COLOR << std::endl;
    JohnSmith.incrementGrade();
    std::cout << "After incrementing, " << JohnSmith << std::endl;
    JohnSmith.decrementGrade();
    std::cout << "After decrementing, " << JohnSmith << std::endl;
    return 0;
}