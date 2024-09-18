/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:46:52 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/19 00:17:56 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

#ifndef HARL_HPP
#define HARL_HPP

class Harl {
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	Harl();
	void complain(std::string level);
};

#endif
