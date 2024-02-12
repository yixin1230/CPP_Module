/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:45:14 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 17:59:05 by yizhang       ########   odam.nl         */
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
    this->_target = src._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
        throw (Aform::GradeTooLowException());
    else
    {
        if (this->getSigned())
        {
            std::cout<<"               ,@@@@@@@,"<<std::endl;
            std::cout<<"       ,,,.   ,@@@@@@/@@,  .oo8888o."<<std::endl;
            std::cout<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"<<std::endl;
            std::cout<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"<<std::endl;
            std::cout<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<<std::endl;
            std::cout<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"<<std::endl;
            std::cout<<"   `&%\\ ` /%&'    |.|        \\ '|8'"<<std::endl;
            std::cout<<"       |o|        | |         | |"<<std::endl;
            std::cout<<"       |.|        | |         | |"<<std::endl;
            std::cout<<"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"<<std::endl;
        }
        else
        {
             std::cout<<executor.getName()<<" can not execute "<<this->getName()<<", because the form should signed first"<<std::endl;
        }
    }
}