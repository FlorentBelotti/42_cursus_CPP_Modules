/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:22:42 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 16:34:25 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    
    private :

    std::string _target;
    
    public:

    // Methods
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};