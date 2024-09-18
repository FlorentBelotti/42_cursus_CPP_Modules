/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:36:37 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/18 14:44:44 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.h"

#ifndef MANAGER_HPP
#define MANAGER_HPP

class Manager {
	private:
	std::string filename;
	std::string s1;
	std::string s2;

	public:
	Manager(std::string filename, std::string s1, std::string s2);
	bool ProcessFile();
};

#endif
