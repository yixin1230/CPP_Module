/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   From.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/02 18:07:00 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FROM.hpp"

From::From(std::string const &name, bool const &sign, int grade1, int grade2):_name(name),_signed(sign),_gradeSign(grade1),_gradeExecute(grade2)
{
    std::cout<<"constructor called"<<std::endl;
}

From::From(void):_name("name"),_signed(false),_gradeSign(0),_gradeExecute(0)
{
    std::cout<<"constructor called"<<std::endl;
}

From::~From(void)
{
    std::cout<<"descructor called"<<std::endl;
}

From::From(const From &src):_name(src._name),_signed(_signed),_gradeSign(src._gradeSign),_gradeExecute(src._gradeExecute)
{
    std::cout<<"copy conscructor called"<<std::endl;
}

From &From::operator=(const From &src)
{
    if (this != &src)
        _signed = src._signed;
    return (*this);
}

std::string	From::getName(void) const
{
    return (_name);
}

bool		From::getSigned(void) const
{
    return (_signed);
}

int			From::getGradeSign(void) const
{
    return (_gradeSign);
}

int			From::getGradeExecute(void) const
{
    return (_gradeExecute);
}

void		From::beSigned(Bureaucrat a)
{
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, From const &src)
{
    o<< src.getName()<<": "<<src.getGradeExecute();
    return (o);
}
