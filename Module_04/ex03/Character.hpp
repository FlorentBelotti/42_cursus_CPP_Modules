/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:30:33 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:34:43 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : public ICharacter {

	private :

		std::string name;
		AMateria* inventory[4];

	public :

		// Constructor
		Character(std::string const & name);

		// Destructor
		~Character();

		// Getters
		std::string const & getName() const;

		// Functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
