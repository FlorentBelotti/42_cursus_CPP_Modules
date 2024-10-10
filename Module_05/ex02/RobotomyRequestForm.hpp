/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:58 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 14:37:22 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm {
    
    private:
    
    std::string _target;

    public:
    
    // Constructor
    RobotomyRequestForm(std::string const &target);

    // Copy constructor
    RobotomyRequestForm(RobotomyRequestForm const &src);
    
    // Destructor
    ~RobotomyRequestForm();

    // Methods
    void execute(Bureaucrat const &executor) const;
    
    // Operator
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};