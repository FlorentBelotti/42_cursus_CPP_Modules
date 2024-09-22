/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:08:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/22 19:29:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_HPP
#define POINT_HPP

class Point {
	private:
	Fixed const _x;
	Fixed const _y;

	public:
	Point();
	Point(const float a, const float b);
	Point(const Point &copy);
	Point &operator=(const Point &other);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
};

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point);

#endif
