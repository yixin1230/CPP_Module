/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 14:08:11 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/15 23:27:09 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout<<"Intern default constructor called"<<std::endl;
}

Intern::Intern(Intern const &src)
{
    (void)src;
    std::cout<<"Intern copy constructor called"<<std::endl;
}

Intern::~Intern()
{
    std::cout<<"Intern destructor called"<<std::endl;
}

Intern &Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

Aform *Intern::makeForm(std::string name, std::string target)
{
    std::string FormName[3] ={
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    Aform *(Intern::*FunctionPointer[3])(std::string target) = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (name == FormName[i])
        {
            return ((this->*FunctionPointer[i])(target));
        }
    }
    throw Intern::InternExeception();
    
}

Aform *Intern::makePresidentialPardonForm(std::string target)
{
    PresidentialPardonForm *form = new PresidentialPardonForm(target);
    return (form);
}

Aform *Intern::makeRobotomyRequestForm(std::string target)
{
    RobotomyRequestForm *form = new RobotomyRequestForm(target);
    return (form);
}

Aform *Intern::makeShrubberyCreationForm(std::string target)
{
    ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
    return (form);
}

const char* Intern::InternExeception::what() const throw()
{
    return ("Intern does not recognize thr form");
}