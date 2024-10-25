/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:18:41 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 02:12:01 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    
    public:
    
    // Alias
    typedef typename Container::iterator iterator;

    // Constructor
    MutantStack() : std::stack<T, Container>() {}

    // Copy constructor
    MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}

    // Destructor
    ~MutantStack() {}

    // Operator
    MutantStack &operator=(const MutantStack &other) {
        if (this != &other) {
            std::stack<T, Container>::operator=(other);
        }
        return *this;
    }

    // Iterator methods
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};