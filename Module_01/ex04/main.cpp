/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:58:38 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/18 15:00:03 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.h"

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cerr << "Error: s1 and s2 cannot be empty" << std::endl;
		return 1;
	}
	Manager fileManager(filename, s1, s2);
	if (!fileManager.ProcessFile()) {
		return 1;
	}
	std::cout << "File processed successfully!" << std::endl;
	return 0;
}
