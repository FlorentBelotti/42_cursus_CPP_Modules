/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:51:44 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/19 00:47:38 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl() {}

void Harl::debug() {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string code) {
	int levelIndex = -1;

	if (code == "DEBUG")
		levelIndex = 0;
	else if (code == "INFO")
		levelIndex = 1;
	else if (code == "WARNING")
		levelIndex = 2;
	else if (code == "ERROR")
		levelIndex = 3;
	else {
		std::cout << "Invalid code" << std::endl;
		return;
	}
	switch (levelIndex) {
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "Invalid level" << std::endl;
			break;
	}
}

int main(int ac, char **av) {
	Harl harl;
	if (ac != 2) {
		std::cout << "Usage : ./Harl CODE" << std::endl;
		return 0;
	}
	harl.complain(av[1]);
	return 0;
}
