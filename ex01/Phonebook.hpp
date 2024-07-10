/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:10:03 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 00:04:55 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyAwesomePhonebook.h"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Phonebook {

	private:

		Contact contacts[8];
		int		contactCount;

	public:

		Phonebook() : contactCount(0) {}

		void addContact();
		void searchEngine() const;
		void printAllContactsInfos() const;
};

#endif
