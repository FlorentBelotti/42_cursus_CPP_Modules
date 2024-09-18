/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:22:00 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 17:31:51 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(void) {
	std::string STRING = "HI THIS IS BRAIN";
	std::string *STRINGptr = &STRING;
	std::string &STRINGref = STRING;

	std::cout << "---- MEMORY ADRESS ----" << std::endl;
	std::cout << "STRING :" << &STRING << std::endl;
	std::cout << "STRINGptr :" << STRINGptr << std::endl;
	std::cout << "STRINGref :" << &STRINGref << std::endl;

	std::cout << "---- VALUES ----" << std::endl;
	std::cout << "STRING :" << STRING << std::endl;
	std::cout << "STRINGptr :" << *STRINGptr << std::endl;
	std::cout << "STRINGref :" << STRINGref << std::endl;
}
