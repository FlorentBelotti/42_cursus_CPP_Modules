/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/20 01:08:01 by fbelotti         ###   ########.fr       */
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

	// Acess
	int	getRawBits() const;
	void setRawBits(int const rawIntValue);

	// Conversion
	float toFloat() const;
	int toInt() const;

	// Affectation
	Fixed &operator=(const Fixed &other);

	// Comparison
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// Arithmetics
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// Add && sub
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	// Static Members Functions
	static Fixed &min(Fixed &floatA, Fixed &floatB);
	static Fixed &max(Fixed &floatA, Fixed &floatB);
	static const Fixed &min(const Fixed &floatA, const Fixed &floatB);
	static const Fixed &max(const Fixed &floatA, const Fixed &floatB);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
