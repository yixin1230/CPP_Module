/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/27 14:32:06 by yizhang       ########   odam.nl         */
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

float	toFloat(void)const
{
	
}

//f() const makes the function itself const, this only really has meaning for member functions.
//making a member function const means that it cannot call any non-const member funcitons, nor can it change any member variables.
//It also means that the function can be called via a const object if the class

class A
{
public:
void Const_No(); // nonconst member function
void Const_Yes() const; // const member function
};
//-----------

A obj_nonconst; // nonconst object
obj_nonconst.Const_No(); // works fine
obj_nonconst.Const_Yes(); // works fine

const A obj_const = A(); // const object
obj_const.Const_Yes(); // works fine (const object can call const function) obj_const.Const_No(); // ERROR (const object cannot call nonconst function)
int		toInt(void)const
{
	return (this->_val);
}