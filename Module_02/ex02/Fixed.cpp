/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:34:25 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/20 01:09:45 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
}

Fixed::Fixed(const int intValue) {
	_fixedPointValue = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) {
	_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits() const {
	return _fixedPointValue;
}

void Fixed::setRawBits(int const rawIntValue) {
	_fixedPointValue = rawIntValue;
}

float Fixed::toFloat() const {
	return static_cast<float>(_fixedPointValue) / (1 <<_fractionalBits);
}

int Fixed::toInt() const {
	return _fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

	// STATIC MEMBERS

Fixed &Fixed::min(Fixed &floatA, Fixed &floatB) {
	return (floatA < floatB) ? floatA : floatB;
}

Fixed &Fixed::max(Fixed &floatA, Fixed &floatB) {
	return (floatA > floatB) ? floatA : floatB;
}

const Fixed &Fixed::min(const Fixed &floatA, const Fixed &floatB) {
	return (floatA < floatB) ? floatA : floatB;
}

const Fixed &Fixed::max(const Fixed &floatA, const Fixed &floatB) {
	return (floatA > floatB) ? floatA : floatB;
}

	// OPERATORS

// Affectation

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return *this;
}

// Comparison

bool Fixed::operator>(const Fixed &other) const {
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const {
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->getRawBits() != other.getRawBits();
}

// Arithmetics

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed add;
	add.setRawBits(this->getRawBits() + other.getRawBits());
	return add;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed sub;
	sub.setRawBits(this->getRawBits() - other.getRawBits());
	return sub;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed mul;
	mul.setRawBits(this->getRawBits() * other.getRawBits() >> _fractionalBits);
	return mul;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed div;
	if (other.getRawBits() == 0) {
		std::cerr << "Error : division by zero" << std::endl;
		return Fixed();
	}
	div.setRawBits((this->getRawBits() << _fractionalBits) / other.getRawBits());
	return div;
}

// Add && sub

Fixed &Fixed::operator++() {
	this->_fixedPointValue++;
	return *this;
}

Fixed &Fixed::operator--() {
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->_fixedPointValue++;
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->_fixedPointValue--;
	return temp;
}
