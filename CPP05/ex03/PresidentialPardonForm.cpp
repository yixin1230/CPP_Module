/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:32:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/13 22:38:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Aform("PresidentialPardonForm", false, 25, 5),_target(target)
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
    this->_target = src._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw (Aform::GradeTooLowException());
    else if (!this->getSigned())
        throw (Aform::NotSignedException());
    else
    {
        std::cout<<MAG<<_target<<" has been pardoned by Zaphod Beedlebrox."<<RESET<<std::endl;
    }
}
