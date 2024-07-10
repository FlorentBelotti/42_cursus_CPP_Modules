/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:14:41 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/10 15:20:14 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyAwesomePhonebook.h"

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

	private:

		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string phoneNumber;
		int index;

	public:

	void setFirstName(const std::string& userInput) { firstName = userInput; }
	void setLastName(const std::string& userInput) { lastName = userInput; }
	void setNickName(const std::string& userInput) { nickName = userInput; }
	void setDarkestSecret(const std::string& userInput) { darkestSecret = userInput; }
	void setPhoneNumber(const std::string& userInput) { phoneNumber = userInput; }
	void setIndex(const int newIndex) { index = newIndex; }

	std::string getFirstName() const { return firstName; }
	std::string getLastName() const { return lastName; }
	std::string getNickName() const { return nickName; }
	std::string getDarkestSecret() const { return darkestSecret; }
	std::string getPhoneNumber() const { return phoneNumber; }

	int getIndex() const { return index; }
};

#endif
