/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:58:27 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/17 15:13:52 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
