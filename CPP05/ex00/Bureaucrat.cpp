/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:26:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/18 14:04:39 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"Bureaucrat constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
    this->_grade = a._grade;
    this->_name = a.getName();
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
