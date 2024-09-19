/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/19 18:32:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	Fixed(Fixed &copy);

	// Destructor
	~Fixed();

	// Operator
	Fixed &operator=(const Fixed &other);

	// Acess
	int	getRawBits(void) const;
	void setRawBits(int const rawIntValue);

	// Conversion
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
