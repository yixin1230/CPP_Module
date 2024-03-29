/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 12:25:15 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, bool const &sign, int const gradeSign, int const gradeEx):_name(name),_signed(sign),_gradeSign(gradeSign),_gradeExecute(gradeEx)
{
    if (_gradeExecute < 1 || _gradeSign < 1)
        throw Form::GradeTooHighException();
    else if (_gradeExecute > 150 || _gradeSign > 150)
        throw (Form::GradeTooLowException());
    std::cout<<MAG<<"From constructor called"<<RESET<<std::endl;
}

Form::Form(void):_name("name"),_signed(false),_gradeSign(150),_gradeExecute(150)
{
    std::cout<<MAG<<"From constructor called"<<RESET<<std::endl;
}

Form::~Form(void)
{
    std::cout<<MAG<<"From descructor called"<<RESET<<std::endl;
}

Form::Form(const Form &src):_name(src._name),_gradeSign(src._gradeSign),_gradeExecute(src._gradeExecute)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw Form::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (Form::GradeTooLowException());
    std::cout<<MAG<<"Form copy conscructor called"<<RESET<<std::endl;
}

Form &Form::operator=(const Form &src)
{
    if (src._gradeExecute < 1 || src._gradeSign < 1)
        throw Form::GradeTooHighException();
    else if (src._gradeExecute > 150 || src._gradeSign > 150)
        throw (Form::GradeTooLowException());
    if (this != &src)
        _signed = src._signed;
    return (*this);
}

std::string	Form::getName(void) const
{
    return (_name);
}

bool		Form::getSigned(void) const
{
    return (_signed);
}

int			Form::getGradeSign(void) const
{
    return (_gradeSign);
}

int			Form::getGradeExecute(void) const
{
    return (_gradeExecute);
}

void		Form::beSigned(Bureaucrat &a)
{
    if (a.getGrade() < _gradeSign)
	    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
    o<< src.getName()<<": "<<src.getGradeExecute();
    return (o);
}
