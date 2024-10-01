/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:55:32 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:34:04 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#ifndef AMATERIA
#define AMATERIA

class ICharacter;

class AMateria
{
	protected:

		std::string _type;

	public:

		// Constructor
		AMateria(std::string const & type);

		// Destructor
		virtual ~AMateria();

		// Getters
		std::string const & getType() const;

		// Virtual clone
		virtual AMateria* clone() const = 0;

		// Virtual functions
		virtual void use(ICharacter& target);
};

#endif
