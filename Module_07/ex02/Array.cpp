/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:14:54 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/22 18:28:00 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Constructor : Without parameter, allocate an array
template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

// Constructor : With parameter, allocate an array of size n
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

// Copy constructor
template <typename T>
Array<T>::Array(const Array &other) : _array(new T[other._size]), _size(other._size) {
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = other._array[i];
}

// Destructor
template <typename T>
Array<T>::~Array() {
    if (_array)
        delete[] _array;
}

// Operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
    if (this != &other) {
        if (_array)
            delete[] _array;
        _array = new T[other._size];
        _size = other._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return *this;
}

// Getters
template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}