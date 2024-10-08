/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:07:45 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/20 00:19:17 by fbelotti         ###   ########.fr       */
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

	// Constructor copy
	Fixed(const Fixed &copy);

	// Operator
	Fixed &operator=(const Fixed &other);

	// Destructor
	~Fixed();

	// Acess
	int getRawBits() const;
	void setRawBits(int const rawIntValue);
};

#endif
