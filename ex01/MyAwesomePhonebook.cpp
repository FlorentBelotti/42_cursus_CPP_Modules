/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:08:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/10 01:58:10 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.h"

void	getInstructions(void) {
	std::string userInput;

	std::cout << "Please type your instruction (for more information, type HELP)" << std::endl;
	std::getline(std::cin, userInput);
	if (userInput == "ADD")
		std::cout << "Starting to add a contact..." << std::endl;
	else if (userInput == "SEARCH")
		std::cout << "Starting the search..." << std::endl;
	else if (userInput == "EXIT")
		std::cout << "Exiting the phonebook...";
	else if (userInput == "HELP") {
		std::cout << "Type ADD to add a new contact" << std::endl;
		std::cout << "Type SEARCH to see the list of contacts" << std::endl;
		std::cout << "Type EXIT to exit the program" << std::endl;
	}
}
