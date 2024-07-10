/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:13:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 01:02:06 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.h"

void Phonebook::addContact() {
	std::string userInput;
	Contact		newContact;

	std::cout << "Phonebook: adding contact..." << std::endl;
	if (contactCount >= 8) {
		std::cout << "Phonebook: more than 8 contact, replacing the oldest one" << std::endl;
		for (int i = 0; i < 7; i++) {
			contacts[i] = contacts[i];
			contacts[i].setIndex(i);
		}
		contactCount = 7;
	}
	std::cout << "Phonebook: enter contact's first name..." << std::endl;
	std::getline(std::cin, userInput);
	newContact.setFirstName(userInput);
	std::cout << "Phonebook: enter contact's last name..." << std::endl;
	std::getline(std::cin, userInput);
	newContact.setLastName(userInput);
	std::cout << "Phonebook: enter contact's nick name..." << std::endl;
	std::getline(std::cin, userInput);
	newContact.setNickName(userInput);
	std::cout << "Phonebook: enter contact's darkest secret..." << std::endl;
	std::getline(std::cin, userInput);
	newContact.setDarkestSecret(userInput);
	std::cout << "Phonebook: enter contact's phone number..." << std::endl;
	std::getline(std::cin, userInput);
	newContact.setPhoneNumber(userInput);
	newContact.setIndex(contactCount + 1);
	contacts[contactCount] = newContact;
	contactCount++;
	std::cout << "Phonebook: contact added successfully." << std::endl;
}

void Phonebook::printAllContactsInfos() const {
	if (contactCount == 0) {
		std::cout << "Phonebook: no contacts to display" << std::endl;
		return;
	}
	for (int i = 0; i < contactCount; i++) {
		contacts[i].displayContactsInfos();
		std::cout << "--------------------" << std::endl;
	}
}

void Phonebook::searchEngine() const {
	std::string userInput;

	std::cout << "Phonebook: starting search..." << std::endl;
	while (true)
	{
		std::cout << "Please type your demand (for more information, type HELP)" << std::endl;
		std::getline(std::cin, userInput);
		if (userInput == "HELP") {
			std::cout << "- Type the contact index (1-8) to display their information." << std::endl;
			std::cout << "- Type ALL to display information for all contact." << std::endl;
		}
		else if (userInput == "ALL") {
			printAllContactsInfos();
			break ;
		}
		else {
			std::istringstream iss(userInput);
			int index;
			if (iss >> index && iss.eof()) {
				if (index - 1 < contactCount && index > 0)
					contacts[index - 1].displayContactsInfos();
				else
					std::cout << "Phonebook: Search: no contact at this index." << std::endl;
			}
			else
				std::cout << "Phonebook: Search: invalid index." << std::endl;
		}
	}
}

static void exitPhonebook(void) {
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
		exitPhonebook();
	else if (userInput == "HELP") {
		std::cout << "- Type ADD to add a new contact." << std::endl;
		std::cout << "- Type SEARCH to see the list of contacts." << std::endl;
		std::cout << "- Type EXIT to exit the program." << std::endl;
	}
}
