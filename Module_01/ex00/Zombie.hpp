/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:56:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 15:12:39 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {

	private:
	std::string name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce();
};

#endif
