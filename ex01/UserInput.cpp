/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:12:05 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 23:12:57 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.h"

static void exitMyAwesomePhonebook(void) {
	std::cout << "Phonebook: exiting..." << std::endl;
	exit(0);
}

void getUserInput(Phonebook &phonebook) {
	std::string userInput;

	std::cout << "Please type your instruction (for more information, type HELP)" << std::endl;
	std::getline(std::cin, userInput);
	if (userInput == "ADD")
		phonebook.addContact();
	else if (userInput == "SEARCH")
		phonebook.searchEngine();
	else if (userInput == "EXIT")
		exitMyAwesomePhonebook();
	else if (userInput == "HELP") {
		std::cout << "Phonebook: HELP: Type ADD to add a new contact." << std::endl;
		std::cout << "Phonebook: HELP: Type SEARCH to see the list of contacts." << std::endl;
		std::cout << "Phonebook: HELP: Type EXIT to exit the program." << std::endl;
	}
}
