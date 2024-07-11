/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:43:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 22:45:37 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.h"

void Contact::displaySummary() const {
		std::ostringstream oss;
		oss << index;
		std::string indexStr = oss.str();

		std::cout << std::setw(10) << std::right << truncateString(indexStr) << "|"
				  << std::setw(10) << std::right << truncateString(firstName) << "|"
				  << std::setw(10) << std::right << truncateString(lastName) << "|"
				  << std::setw(10) << std::right << truncateString(nickName) << std::endl;
}

void Contact::displayContactsInfos() const {
		std::cout << "Index: " << index << std::endl;
		std::cout << "First Name: " << firstName << std::endl;
		std::cout << "Last Name: " << lastName << std::endl;
		std::cout << "Nick Name: " << nickName << std::endl;
		std::cout << "Phone Number: " << phoneNumber << std::endl;
		std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contact::truncateString(const std::string& str) const {
		if (str.length() > 10)
			return str.substr(0, 9) + ".";
		else
			return str;
}
