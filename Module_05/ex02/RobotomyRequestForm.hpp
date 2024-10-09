/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:58 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/09 17:08:09 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm {
private:
    std::string _target;

public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    void execute(Bureaucrat const &executor) const;
};