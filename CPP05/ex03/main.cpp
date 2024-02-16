/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/11 00:25:27 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/16 14:53:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern yixin;
    Bureaucrat bob("Bob", 1);
    Aform *someForm;
    Aform *robotomyRequestForm;
    Aform *presidentialPardonForm;
    Aform *shrubberyCreationForm;

    //test robotomy request
    try
    {
        someForm = yixin.makeForm("some", "something");
        robotomyRequestForm = yixin.makeForm("robotomy request", "something");
        shrubberyCreationForm = yixin.makeForm("shrubbery creation", "something");
        presidentialPardonForm = yixin.makeForm("presidential pardon", "something");
        std::cout<<someForm->getName()<<std::endl;
        std::cout<<robotomyRequestForm->getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() << RESET<<std::endl;
    }
    
    //test presifential pardon
    try
    {
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    //test shrubbery creation
    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    //test random form
    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    //delete forms
    if (someForm)
        delete someForm;
    if (robotomyRequestForm)
        delete robotomyRequestForm;
    if (presidentialPardonForm)
        delete presidentialPardonForm;
    if (shrubberyCreationForm)
        delete shrubberyCreationForm;
    return 0;
}