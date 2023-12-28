/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 14:37:34 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->_val = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = a;
}

Fixed::Fixed(const int i):_val(i << _bits)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float f):_val(roundf(f * (1 << _bits)))
{
	std::cout<<"Float constructor called"<<std::endl;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (_val);
}

void	Fixed::setRawBits(int const raw)
{
	_val = raw;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
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
bool	Fixed::operator>(Fixed const &a)
{
	if (_val > a._val)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &a)
{
	if (_val < a._val)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &a)
{
	if (_val >= a._val)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &a)
{
	if (_val <= a._val)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &a)
{
	if (_val == a._val)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &a)
{
	if (_val != a._val)
		return (true);
	return (false);
}


//4 arthmetic operators:
//the first parameter is implicitly the calling object , so only need one function
Fixed	Fixed::operator+(Fixed const &a)
{
	Fixed	ret(this->toFloat() + a.toFloat());
	return ret;
}

Fixed	Fixed::operator-(Fixed const &a)
{
	Fixed	ret(this->toFloat() - a.toFloat());
	return ret;
}

Fixed	Fixed::operator*(Fixed const &a)
{
	Fixed	ret(this->toFloat() * a.toFloat());
	return ret;
}

Fixed	Fixed::operator/(Fixed const &a)
{
	Fixed	ret(this->toFloat() / a.toFloat());
	return ret;
}


//4 increment/decrement operators
Fixed	Fixed::operator++(int)
{
	Fixed	ret(this->toInt() + 1);
	return ret;
}

Fixed	Fixed::operator--()
{
	Fixed	ret(this->toInt()+ 1);
	return ret;
}

Fixed	Fixed::operator++()
{
	
}

Fixed	Fixed::operator--()
{
	
}


//four public overloaded member functions:
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	
}

Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	
}

Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	
}

