/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:56:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/18 14:30:26 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {

	private:
	std::string type;

	public:
	Weapon(std::string type_of_weapon);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string type);
};

#endif
