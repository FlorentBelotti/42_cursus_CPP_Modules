/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:21:57 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 11:25:28 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {
        private :
    
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
    
        public :
    
        // Constructor
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
    
        // Operator
        Form& operator=(const Form& other);
    
        // Destructor
        ~Form();
    
        // Getters
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
    
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
        void beSigned(Bureaucrat& bureaucrat);
                
};
        
std::ostream& operator<<(std::ostream& os, const Form& obj);