/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:10:11 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:35:14 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class Cure : public AMateria {

	public:

		// Constructor
		Cure();

		// Redefinitions
		AMateria* clone() const;

		void use(ICharacter& target);
};

#endif
