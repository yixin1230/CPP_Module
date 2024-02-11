/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:45:14 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 23:43:27 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Aform("ShrubberyCreationForm", false, 25, 5),_target(target)
{
    std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Aform(src), _target(src._target)
{
    std::cout<<"PresidentialPardonForm copy constructor called"<<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"PresidentialPardonForm destructor called"<<std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    return *this;//test
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw (Aform::GradeTooLowException());
    else
    {
        if (this->getSigned())
        {
            std::cout<<executor.getName()<<" execute "<<this->getName()<<std::endl;
        }
        else
        {
             std::cout<<executor.getName()<<" can not execute "<<this->getName()<<", because the form should signed first"<<std::endl;
        }
    }
}