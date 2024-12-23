/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:56:44 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/28 17:47:25 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nom du programme : PmergeMe

Objectif : Utiliser l'algorithme de tri "merge-insert" (Ford-Johnson) pour trier la sequence de nombre en utilisant 2 containers de le code.

Entree du programme : une sequence d'entier positif en arguments.

Format de la sortie du programme :

- La sequence non triee.
- La sequence triee.
- Le temps utilise par l'algorithme pour trier la sequence et le nom du container utilise en premier.
- Le temps utilise par l'algorithme pour trier la sequence et le nom du container utilise en deuxieme.

Exemple de sortie :

Before: 3 5 9 7 4
After: 3 4 5 7 9
Time to process a range of 5 elements with std::[..] : 0.00031 us
Time to process a range of 5 elements with std::[..] : 0.00014 us

*/

#include "PmergeMe.hpp"

int main(int argc, char** av) {
    
    if (argc < 2) {
        std::cerr << RED << "Usage: " << av[0] << " <sequence of positive integers>" << RESET_COLOR << std::endl;
        return 1;
    }
    PmergeMe merge;

    if (merge.parseArgs(av + 1))
        return (1);
    
    if (merge.sortVector() || merge.sortList())
      return (1);

    merge.displayResult();
    return 0;
}