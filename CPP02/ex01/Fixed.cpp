/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/27 16:24:32 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->_val = 0;
}

Fixed::Fixed(Fixed &a)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->setRawBits(a.getRawBits()); //
}

Fixed::Fixed(const int i)
{
	std::cout<<"Int constructor called"<<std::endl;
	
}

Fixed::Fixed(const float f)
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
	this->val /
}

int		Fixed::toInt(void)const
{
	this->_val >> this->_bits;
	return (this->_bits);
}