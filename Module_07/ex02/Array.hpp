/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:59:06 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/22 18:25:22 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
template <typename T>
class Array {
    
    private:

    T* _array;
    unsigned int _size;

    public:

    // Constructor : Without parameter, allocate an array
    Array();

    // Constructor : With parameter, allocate an array of size n
    Array(unsigned int n);
    
    // Copy constructor
    Array(const Array &other);
    
    // Destructor
    ~Array();

    // Operator
    Array &operator=(const Array &other);

    // Getters
    unsigned int size() const;
};