/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:00:32 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/12 18:21:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include <string>
#include <iostream>

struct Data {
    int number;
    std::string text;
};

class Serializer {

    private :

    Serializer();
    Serializer(Serializer const &src);
    Serializer &operator=(Serializer const &rhs);
    ~Serializer();
    std::string _str;

    public :

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};