/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:31:09 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/08 22:22:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    // Bureaucrat tests
    
    std::cout << BLUE << "\t----- Bureaucrat tests ----\n" << std::endl; 
    try {
        Bureaucrat ToLow("John Doe", 0);
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    try {
        Bureaucrat ToHigh("Jane Doe", 151);
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    Bureaucrat JohnSmith("John Smith", 42);
    std::cout << JohnSmith << std::endl;
    JohnSmith.incrementGrade();
    std::cout << "After incrementing, " << JohnSmith << std::endl;
    JohnSmith.decrementGrade();
    std::cout << "After decrementing, " << JohnSmith << RESET_COLOR << std::endl << std::endl;
    
    // Form tests
    
    std::cout << "\t----- Form tests -----\n" << std::endl;
    try {
        Form ToLow("Form1", 0, 42);
    } catch (const Form::GradeTooHighException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    } catch (const Form::GradeTooLowException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    try {
        Form TooHigh("Form1", 160, 160);
    } catch (const Form::GradeTooHighException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    } catch (const Form::GradeTooLowException& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET_COLOR << std::endl;
    }
    Form Form1("A38", 38, 38);
    std::cout << YELLOW << Form1 << RESET_COLOR << std::endl;
    Bureaucrat JohnDoe("John Doe", 35);
    std::cout << JohnDoe << GREEN << std::endl;
    Form1.beSigned(JohnDoe);
    std::cout << YELLOW << Form1 << RESET_COLOR << std::endl;
    return 0;
}