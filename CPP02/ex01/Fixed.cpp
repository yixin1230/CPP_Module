/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 07:43:12 by yizhang       ########   odam.nl         */
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

Fixed::Fixed(const int i):_val(i << 8)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float f):_val((int)f << 8)
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
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

Fixed &Fixed::operator=(Fixed const &a)//should return a refer otherwise will creat a new obj
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->_val = a.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return (this->_val / (1 << this->_bits));
}

int		Fixed::toInt(void)const
{
	
	return (this->_val >> this->_bits);
}

std::ostream &operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return o;
} 
