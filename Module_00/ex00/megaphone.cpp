/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:40:20 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/17 10:52:56 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; i < ac; ++i) {
		for (int j = 0; av[i][j]; ++j){
			std::cout << static_cast<char>(std::toupper(av[i][j]));
		}
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}
