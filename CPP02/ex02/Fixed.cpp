/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 12:42:32 by yizhang       ########   odam.nl         */
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

