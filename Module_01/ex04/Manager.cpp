/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:41:50 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/18 14:58:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.h"

Manager::Manager(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {}

bool Manager::ProcessFile() {
	std::ifstream inputFile(this->filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open input file : " << this->filename << std::endl;
		return false;
	}
	std::string outputFile = this->filename + ".replace";
	std::ofstream outFile(outputFile);
	if (!outFile.is_open()) {
		std::cerr << "Error: Could not create output file : " << outputFile << std::endl;
		return false;
	}
	std::string line;
	while (std::getline(inputFile, line)) {
		std::size_t pos;
		while ((pos = line.find(this->s1)) != std::string::npos) {
			line.erase(pos, this->s1.length());
			line.insert(pos, this->s2);
		}
		outFile << line << std::endl;
	}
	inputFile.close();
	outFile.close();
	return true;
}
