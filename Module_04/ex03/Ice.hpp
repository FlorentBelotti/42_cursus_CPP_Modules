/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:10:11 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:37:00 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

class Ice : public AMateria {

	public:

		// Constructor
		Ice();

		// Redefinitions
		AMateria* clone() const;

		void use(ICharacter& target);
};

#endif
