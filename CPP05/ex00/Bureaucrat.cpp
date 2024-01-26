/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:26:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/26 09:17:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"Bureaucrat constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
    this->_grade = a._grade;
    std::cout<<"Bureaucrat copy constructor called"<<std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
    this->_grade = a._grade;
    return (*this);
}

std::string	Bureaucrat::getName(void)
{
    return (_name);
}

int	Bureaucrat::getGrade(void)
{
    return (_grade);
}

void Bureaucrat::increment(int grade)
{
    _grade -= grade;
}

void Bureaucrat::decrement(int grade)
{
    _grade += grade;
}
