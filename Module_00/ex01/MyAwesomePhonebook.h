/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:16:41 by fbelotti          #+#    #+#             */
/*   Updated: 2024/07/11 22:24:39 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOMEPHONEBOOK_H
#define MYAWESOMEPHONEBOOK_H

/* HEADERS */

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iomanip>

/* CLASSES */

#include "Contact.hpp"
#include "Phonebook.hpp"

/* FUNCTIONS */

void getUserInput(Phonebook &phonebook);

#endif
