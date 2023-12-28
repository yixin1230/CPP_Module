/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 18:16:48 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_val = 0;
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

Fixed::Fixed(const int i):_val(i << _bits)
{
}

Fixed::Fixed(const float f):_val(roundf(f * (1 << _bits)))
{
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (_val);
}

void	Fixed::setRawBits(int const raw)
{
	_val = raw;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	this->_val = a.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return ((float)_val / (1 << _bits));
}

int		Fixed::toInt(void)const
{
	return (_val >> _bits);
}

std::ostream &operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return o;
} 


//6 comparison operators:
bool	Fixed::operator>(Fixed const &a) const
{
	return (_val > a._val);
}

bool	Fixed::operator<(Fixed const &a) const
{
	return (_val < a._val);
}

bool	Fixed::operator>=(Fixed const &a) const
{
	return (_val >= a._val);
}

bool	Fixed::operator<=(Fixed const &a) const
{
	return (_val <= a._val);
}

bool	Fixed::operator==(Fixed const &a) const
{
	return (_val == a._val);
}

bool	Fixed::operator!=(Fixed const &a) const
{
	return (_val != a._val);
}


//4 arthmetic operators:
//the first parameter is implicitly the calling object , so only need one function
Fixed	Fixed::operator+(Fixed const &a) const
{
	Fixed	ret(this->toFloat() + a.toFloat());
	return ret;
}

Fixed	Fixed::operator-(Fixed const &a) const
{
	Fixed	ret(this->toFloat() - a.toFloat());
	return ret;
}

Fixed	Fixed::operator*(Fixed const &a) const
{
	Fixed	ret(this->toFloat() * a.toFloat());
	return ret;
}

Fixed	Fixed::operator/(Fixed const &a) const
{
	Fixed	ret(this->toFloat() / a.toFloat());
	return ret;
}


//4 increment/decrement operators
Fixed	Fixed::operator++(int) //post increment
{
	Fixed tmp(*this);
	tmp._val = this->_val++;
	return (tmp);
}

Fixed	Fixed::operator--(int) //post decrement
{
	Fixed tmp(*this);
	tmp._val = this->_val--;
	return (tmp);
}

Fixed	&Fixed::operator++() //pre increment
{
	++(this->_val);
	return (*this);
}

Fixed	&Fixed::operator--() //pre decrement
{
	--(this->_val);
	return (*this);
}

//four public overloaded member functions:
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return a;
	return b;
}
