/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:56:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/18 13:52:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {

	private:
	std::string type;

	public:
	Weapon(std::string type);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string type);
};

#endif
