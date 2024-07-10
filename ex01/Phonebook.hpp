/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:10:03 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/10 11:53:10 by fbelotti         ###   ########.fr       */
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
		void addContact();
};

#endif
