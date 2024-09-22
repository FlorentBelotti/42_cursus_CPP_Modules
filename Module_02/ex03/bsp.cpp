/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:30:32 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/22 19:30:50 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed crossProduct(const Point &a, const Point &b, const Point &p) {
	return (b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point) {
	Fixed cross1 = crossProduct(a, b, point);
	Fixed cross2 = crossProduct(b, c, point);
	Fixed cross3 = crossProduct(c, a, point);
	bool has_neg = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);
	bool has_pos = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);
	return !(has_neg && has_pos);
}
