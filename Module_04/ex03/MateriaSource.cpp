/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:40:06 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/02 01:44:13 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_materias[i]) {
			_materias[i] = m->clone();
			delete m;
			return;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return NULL;
}
