/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:14:04 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/12 18:30:17 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Color.hpp"

Serializer::Serializer() {
    std::cout << "Constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &src) {
    std::cout << "Copy constructor called" << std::endl;
    if (this != &src) {
        _str = src._str;
    }
}

Serializer::~Serializer() {
    std::cout << "Destructor called" << std::endl;
}

Serializer &Serializer::operator=(Serializer const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) {
        _str = rhs._str;
    }
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
    std::cout << GREEN << "Data has been successfully serialize" << RESET_COLOR << std::endl;
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    std::cout << GREEN << "Serialize data has been successfully normalize" << RESET_COLOR << std::endl;
    return reinterpret_cast<Data*>(raw);
}