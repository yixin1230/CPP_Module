/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:45:14 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/29 14:38:53 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Aform("ShrubberyCreationForm", false, 145, 137),_target(target)
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
    else if (!this->getSigned())
        throw (Aform::NotSignedException());
    else
        {
            std::ofstream file(_target + "_shrubbery");
            file<<GREEN<<"               ,@@@@@@@,\n";
            file<<"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
            file<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
            file<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
            file<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
            file<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
            file<<"   `&%\\ ` /%&'    |.|        \\ '|8'\n";
            file<<"       |o|        | |         | |\n";
            file<<"       |.|        | |         | |\n";
            file<<",.. \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
        }
}