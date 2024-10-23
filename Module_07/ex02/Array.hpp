/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:59:06 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/23 12:08:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

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
    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    
    // Getters
    unsigned int size() const;
    T* get_array() const;
};

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

// Assignment operator
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

// Non-const subscript operator
template <typename T>
T &Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

// Const subscript operator
template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

// Getters
template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
T* Array<T>::get_array() const {
    return _array;
}