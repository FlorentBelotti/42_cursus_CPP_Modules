/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:13:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 23:27:52 by fbelotti         ###   ########.fr       */
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
			contacts[i] = contacts[i + 1];
			contacts[i].setIndex(i + 1);
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

int Phonebook::printContactsInfos() const {
	if (contactCount == 0) {
		std::cout << "Phonebook: SEARCH: no contacts to display" << std::endl;
		return (1);
	}
	std::cout << std::setw(10) << std::right << "Index" << "|"
			  << std::setw(10) << std::right << "First Name" << "|"
			  << std::setw(10) << std::right << "Last Name" << "|"
			  << std::setw(10) << std::right << "Nick Name" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < contactCount; i++) {
		contacts[i].displaySummary();
	}
	return (0);
}

void Phonebook::searchEngine() const {
	std::string userInput;

	std::cout << "Phonebook: starting search..." << std::endl;
	if (printContactsInfos() == 1)
		return;
	while (true)
	{
		int index;

		std::cout << "Phonebook: SEARCH: Type the index of the contact you are intersted in or type EXIT to leave SEARCH" << std::endl;
		std::getline(std::cin, userInput);
		if (userInput == "EXIT")
		{
			std::cout << "Phonebook: SEARCH: Exiting..." << std::endl;
			break;
		}
		std::istringstream iss(userInput);
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
