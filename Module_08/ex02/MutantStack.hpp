/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:18:41 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 01:30:40 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

template <typename T>
class MutantStack {
    
    private:
    
    std::vector<T> _stack;

    public:
    
    // Alias de type pour l'itérateur
    typedef typename std::vector<T>::iterator iterator;
    typedef typename std::vector<T>::const_iterator const_iterator;

    // Constructor
    MutantStack();

    // Copy constructor
    MutantStack(const MutantStack &other);

    // Destructor
    ~MutantStack();

    // Operator
    MutantStack &operator=(const MutantStack &other);

    // Pile methods
    void push(T value);
    void pop();
    T top() const;
    bool empty() const;
    size_t size() const;

    // Iterator methods
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
};

// Constructor
template <typename T>
MutantStack<T>::MutantStack() {}

// Copy constructor
template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : _stack(other._stack) {}

// Destructor
template <typename T>
MutantStack<T>::~MutantStack() {}

// Operator
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

// Pile methods
template <typename T>
void MutantStack<T>::push(T value) {
    _stack.push_back(value);
}

template <typename T>
void MutantStack<T>::pop() {
    if (!_stack.empty()) {
        _stack.pop_back();
    }
}

template <typename T>
T MutantStack<T>::top() const {
    return _stack.back();
}

template <typename T>
bool MutantStack<T>::empty() const {
    return _stack.empty();
}

template <typename T>
size_t MutantStack<T>::size() const {
    return _stack.size();
}

// Iterator methods
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return _stack.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return _stack.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return _stack.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return _stack.end();
}