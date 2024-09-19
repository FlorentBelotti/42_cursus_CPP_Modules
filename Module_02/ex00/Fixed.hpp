/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/19 23:55:48 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

	private:

	int	_fixedPointValue;
	static const int _fractionalBits;

	public:

	// Constructor
	Fixed();
	Fixed(const int intValue);
	Fixed(const float floatValue);

	// Constructor copy
	Fixed(const Fixed &copy);

	// Destructor
	~Fixed();

	// Operator
	Fixed &operator=(const Fixed &other);

	// Acess
	int	getRawBits() const;
	void setRawBits(int const rawIntValue);

	// Conversion
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
