/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:55:47 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/14 16:37:00 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Color.hpp"

#pragma once

class Base {
    public:
        virtual ~Base() {};
};

inline void identify(Base& base);
inline void identify(Base* base);
inline Base* Generate();