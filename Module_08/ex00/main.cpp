/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:55:22 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/23 20:58:27 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Color.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    int trueTarget = 30;

    try {
        int result = easyfind(vec, trueTarget);
        std::cout << GREEN << "Élément trouvé : " << result << RESET_COLOR << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Élément non trouvé" << RESET_COLOR << std::endl;
    }

    int falseTarget = 42;

    try {
        int result = easyfind(vec, falseTarget);
        std::cout << GREEN << "Élément trouvé : " << result << RESET_COLOR << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Élément non trouvé" << RESET_COLOR << std::endl;
    }

    return 0;   
}