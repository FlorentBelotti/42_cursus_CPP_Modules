/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:56:16 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 01:21:55 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Color.hpp"

int main()
{
    MutantStack<int> mstack;

    // Pousser des éléments dans la pile
    mstack.push(5);
    mstack.push(17);

    // Afficher l'élément au sommet de la pile
    std::cout << GREEN << "Top element: " << RESET_COLOR << mstack.top() << std::endl;

    // Retirer l'élément au sommet de la pile
    mstack.pop();

    // Afficher la taille de la pile
    std::cout << YELLOW << "Stack size: " << RESET_COLOR << mstack.size() << std::endl;

    // Ajouter d'autres éléments
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Afficher la taille de la pile
    std::cout << YELLOW << "Stack size: " << RESET_COLOR << mstack.size() << std::endl;

    // Utiliser des itérateurs pour parcourir la pile
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << YELLOW << "\n----- Stack elements -----" << RESET_COLOR << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    return 0;

    std::stack<int> s(mstack);
}