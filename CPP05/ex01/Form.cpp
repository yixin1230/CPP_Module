/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/09 17:47:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

form::form(std::string const &name, bool const &sign, int const gradeSign, int const gradeEx):_name(name),_signed(sign),_gradeSign(gradeSign),_gradeExecute(gradeEx)
{
    if (_gradeExecute < 1 || _gradeSign < 1)
        throw form::GradeTooHighException();
    else if (_gradeExecute > 150 || _gradeSign > 150)
        throw (form::GradeTooLowException());
    std::cout<<MAG<<"form constructor called"<<RESET<<std::endl;
}

form::form(void):_name("name"),_signed(false),_gradeSign(150),_gradeExecute(150)
{
    std::cout<<MAG<<"form constructor called"<<RESET<<std::endl;
}

form::~form(void)
{
    std::cout<<MAG<<"form descructor called"<<RESET<<std::endl;
}

form::form(const form &src):_name(src._name),_gradeSign(src._gradeSign),_gradeExecute(src._gradeExecute)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw form::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (form::GradeTooLowException());
    std::cout<<MAG<<"Form copy conscructor called"<<RESET<<std::endl;
}

form &form::operator=(const form &src)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw form::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (form::GradeTooLowException());
    if (this != &src)
        _signed = src._signed;
    return (*this);
}

std::string	form::getName(void) const
{
    return (_name);
}

bool		form::getSigned(void) const
{
    return (_signed);
}

int			form::getGradeSign(void) const
{
    return (_gradeSign);
}

int			form::getGradeExecute(void) const
{
    return (_gradeExecute);
}

void		form::beSigned(Bureaucrat &a)
{
    if (a.getGrade() < _gradeSign)
	    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, form const &src)
{
    o<< src.getName()<<": "<<src.getGradeExecute();
    return (o);
}
