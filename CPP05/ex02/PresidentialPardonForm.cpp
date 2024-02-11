/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:32:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 23:30:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Aform("PresidentialPardonForm", false, 145, 137),_target(target)
{
    std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): Aform(src), _target(src._target)
{
    std::cout<<"PresidentialPardonForm copy constructor called"<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm destructor called"<<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    return *this;//test
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
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
