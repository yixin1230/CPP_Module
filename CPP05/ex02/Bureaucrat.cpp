/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:26:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 19:47:23 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int &grade): _name(name), _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout<<YELLOW<<"Bureaucrat constructor called"<<RESET<<std::endl;
}

Bureaucrat::Bureaucrat(void): _name("name"), _grade(150)
{
    std::cout<<YELLOW<<"Bureaucrat constructor called"<<RESET<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
    this->_grade = a._grade;
    std::cout<<YELLOW<<"Bureaucrat copy constructor called"<<RESET<<std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<YELLOW<<"Bureaucrat destructor called"<<RESET<<std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
    this->_grade = a._grade;
    return (*this);
}

std::string	Bureaucrat::getName(void) const
{
    return (_name);
}

int	Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void Bureaucrat::increment(void)
{
    if (_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::decrement(void)
{
    if (_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    _grade += 1;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    o<<src.getName()<<", Bureaucrat grade "<<src.getGrade();
    return o;
}

void		Bureaucrat::signform(Aform &a)
{
	if (a.getSigned())
		std::cout<<_name<<" signed "<< a.getName()<<std::endl;
	else
    {
		std::cout<<_name<<" couldn't sign "<<a.getName()<<" beacuse ";
        if (_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            std::cout<<_name<<" grate is not high enough"<<std::endl;
    }
}

void	Bureaucrat::executeForm(Aform const &form)
{
    
}