/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:27:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:37:58 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class Intern {
public:

    // Constructor
    Intern();

    // Copy Constructor
    Intern(Intern const &src);

    // Destructor
    ~Intern();

    // Methods
    AForm* makeForm(const std::string& formName, const std::string& target);

    //Operator
    Intern &operator=(Intern const &rhs);
};