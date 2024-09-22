/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:20:50 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/22 19:28:39 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed()) {} ;

Point::Point(const float a, const float b) : _x(a), _y(b) {} ;

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {} ;

Point::~Point() {} ;

Point &Point::operator=(const Point &other) {
	if (this != &other) {
		const_cast<Fixed &>(_x) = other.getX();
		const_cast<Fixed &>(_y) = other.getY();
	}
	return *this;
}

Fixed Point::getX() const {
	return _x;
}

Fixed Point::getY() const {
	return _y;
}
