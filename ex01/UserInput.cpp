/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:13:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/10 11:54:06 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.h"

void Phonebook::addContact() {
	std::string userInput;
	Contact		newContact;

	if (contactCount >= 8) {
		std::cout << "Phonebook: more than 8 contact, replacing the oldest one" << std::endl;
		for (int i = 0; i < 7; ++i)
			contacts[i] = contacts[i + 1];
		contactCount = 7;
	}
	std::cout << "Phonebook: enter contact's first name..." << std::endl;
	std::getline(std::cin, userInput);
	//firstname function
	std::cout << "Phonebook: enter contact's last name..." << std::endl;
	std::getline(std::cin, userInput);
	//lastname function
	std::cout << "Phonebook: enter contact's nick name..." << std::endl;
	std::getline(std::cin, userInput);
	//nickename function
	std::cout << "Phonebook: enter contact's darkest secret..." << std::endl;
	std::getline(std::cin, userInput);
	//secret function
	std::cout << "Phonebook: enter contact's phone number..." << std::endl;
	std::getline(std::cin, userInput);
	//phone function
    contacts[contactCount] = newContact;
    contactCount++;
    std::cout << "Phonebook: contact added successfully." << std::endl;
}

void getUserInput(void) {
	std::string userInput;

	std::cout << "Please type your instruction (for more information, type HELP)" << std::endl;
	std::getline(std::cin, userInput);
	if (userInput == "ADD")
		std::cout << "Phonebook: adding contact..." << std::endl;
	else if (userInput == "SEARCH")
		std::cout << "Phonebook: starting search..." << std::endl;
	else if (userInput == "EXIT")
		std::cout << "Phonebook: exiting...";
	else if (userInput == "HELP") {
		std::cout << "- Type ADD to add a new contact" << std::endl;
		std::cout << "- Type SEARCH to see the list of contacts" << std::endl;
		std::cout << "- Type EXIT to exit the program" << std::endl;
	}
}
