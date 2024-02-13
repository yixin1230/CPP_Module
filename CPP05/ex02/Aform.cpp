/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aform.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/09 17:28:16 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"

Aform::Aform(std::string const &name, bool const &sign, int gradeSign, int gradeEx):_name(name),_signed(sign),_gradeSign(gradeSign),_gradeExecute(gradeEx)
{
    if (_gradeExecute < 1 || _gradeSign < 1)
        throw Aform::GradeTooHighException();
    else if (_gradeExecute > 150 || _gradeSign > 150)
        throw (Aform::GradeTooLowException());
    std::cout<<"constructor called"<<std::endl;
}

Aform::Aform(void):_name("name"),_signed(false),_gradeSign(150),_gradeExecute(150)
{
    std::cout<<"Aform constructor called"<<std::endl;
}

Aform::~Aform(void)
{
    std::cout<<"Aform descructor called"<<std::endl;
}

Aform::Aform(const Aform &src):_name(src._name),_signed(src._signed),_gradeSign(src._gradeSign),_gradeExecute(src._gradeExecute)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw Aform::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (Aform::GradeTooLowException());
    std::cout<<"Aform copy conscructor called"<<std::endl;
}

Aform &Aform::operator=(const Aform &src)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw Aform::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (Aform::GradeTooLowException());
    if (this != &src)
        _signed = src._signed;
    return (*this);
}

std::string	Aform::getName(void) const
{
    return (_name);
}

bool		Aform::getSigned(void) const
{
    return (_signed);
}

int			Aform::getGradeSign(void) const
{
    return (_gradeSign);
}

int			Aform::getGradeExecute(void) const
{
    return (_gradeExecute);
}

void		Aform::beSigned(Bureaucrat &a)
{
    if (a.getGrade() < _gradeSign)
	    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Aform const &src)
{
    o<< src.getName()<<": "<<src.getGradeExecute();
    return (o);
}
