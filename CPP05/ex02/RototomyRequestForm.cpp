/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RototomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:44:04 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 23:39:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Aform("RobotomyRequestForm", false, 72, 45),_target(target)
{
    std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): Aform(src), _target(src._target)
{
    std::cout<<"RobotomyRequestForm copy constructor called"<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm destructor called"<<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    return *this;//test
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
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