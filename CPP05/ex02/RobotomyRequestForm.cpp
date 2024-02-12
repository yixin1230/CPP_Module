/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:44:04 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 17:59:00 by yizhang       ########   odam.nl         */
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
    this->_target = src._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw (Aform::GradeTooLowException());
    else
    {
        if (this->getSigned())
        {
            std::cout<<"Bzzzz Zzzzz....."<<std::endl;
            std::cout<<_target<<" has been roboyomized sucessfully 50%% of the time."<<std::endl;
        }
        else
        {
             std::cout<<executor.getName()<<" robotomy failed"<<this->getName()<<", because the form should signed first"<<std::endl;
        }
    }
}