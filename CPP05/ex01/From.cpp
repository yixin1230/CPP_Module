/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   From.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/08 09:12:40 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "From.hpp"


From::From(std::string const &name, bool const &sign, int grade1, int grade2):_name(name),_signed(sign),_gradeSign(grade1),_gradeExecute(grade2)
{
    if (_gradeExecute < 1 || _gradeSign < 1)
        throw From::GradeTooHighException();
    else if (_gradeExecute > 150 || _gradeSign > 150)
        throw (From::GradeTooLowException());
    std::cout<<MAG<<"From constructor called"<<RESET<<std::endl;
}

From::From(void):_name("name"),_signed(false),_gradeSign(150),_gradeExecute(150)
{
    std::cout<<MAG<<"From constructor called"<<RESET<<std::endl;
}

From::~From(void)
{
    std::cout<<MAG<<"From descructor called"<<RESET<<std::endl;
}

From::From(const From &src):_name(src._name),_gradeSign(src._gradeSign),_gradeExecute(src._gradeExecute)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw From::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (From::GradeTooLowException());
    std::cout<<MAG<<"Form copy conscructor called"<<RESET<<std::endl;
}

From &From::operator=(const From &src)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw From::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (From::GradeTooLowException());
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

void		From::beSigned(Bureaucrat &a)
{
    if (a.getGrade() < _gradeSign)
	    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, From const &src)
{
    o<< src.getName()<<": "<<src.getGradeExecute();
    return (o);
}
