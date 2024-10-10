/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/10 14:37:15 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm {

    private:

    std::string _target;

    public:

    // Constructor
    PresidentialPardonForm(std::string const &target);

    // Copy constructor
    PresidentialPardonForm(PresidentialPardonForm const &src);

    // Destructor
    ~PresidentialPardonForm();

    // Methods
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    void execute(Bureaucrat const &executor) const;
};