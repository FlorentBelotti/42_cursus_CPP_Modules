/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:56:16 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 01:58:00 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Color.hpp"

int main()
{
    MutantStack<int> mstack;

    // Pousser des éléments dans la pile
    std::cout << YELLOW << "\n----- Pushing two elements -----\n" << RESET_COLOR << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << YELLOW << "Stack size: " << RESET_COLOR << mstack.size() << std::endl;

    // Afficher l'élément au sommet de la pile
    std::cout << GREEN << "Top element: " << RESET_COLOR << mstack.top() << std::endl;

    // Retirer l'élément au sommet de la pile
    std::cout << RED << "\n----- Deleting one element -----\n" << RESET_COLOR << std::endl;
    mstack.pop();

    // Afficher la taille de la pile
    std::cout << YELLOW << "Stack size: " << RESET_COLOR << mstack.size() << std::endl;
    std::cout << GREEN << "Top element: " << RESET_COLOR << mstack.top() << std::endl;

    // Ajouter d'autres éléments
    std::cout << YELLOW << "\n----- Pushing four elements -----" << RESET_COLOR << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(42);
    mstack.push(24601);

    // Afficher la taille de la pile
    std::cout << YELLOW << "\nStack size: " << RESET_COLOR << mstack.size() << std::endl;
    std::cout << GREEN << "Top element: " << RESET_COLOR << mstack.top() << std::endl;

    // Utiliser des itérateurs pour parcourir la pile
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << BLUE << "\n----- Stack elements -----" << RESET_COLOR << std::endl;
    while (it != ite) {
        if (it == ite - 1)
            std::cout << GREEN << *it << RESET_COLOR << std::endl;
        else
            std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << MAGENTA << "\n----- Copy -----" << RESET_COLOR << std::endl;
    std::cout << YELLOW << "\nCopy size: " << RESET_COLOR << s.size() << std::endl;
    std::cout << GREEN << "Top element: " << RESET_COLOR << s.top() << std::endl;
    return 0;
}