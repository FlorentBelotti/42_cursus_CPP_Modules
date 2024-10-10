/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:22:42 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 14:37:29 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    
    private :

    std::string _target;
    
    public:

    // Constructor
    ShrubberyCreationForm(std::string const &target);

    // Copy constructor
    ShrubberyCreationForm(ShrubberyCreationForm const &src);

    // Destructor
    ~ShrubberyCreationForm();

    // Methods
    void execute(Bureaucrat const &executor) const;

    // Operator
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};