/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/11 00:25:27 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/16 16:06:04 by yizhang       ########   odam.nl         */
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
        robotomyRequestForm = yixin.makeForm("robotomy request", "something");
        std::cout<<robotomyRequestForm->getName()<<std::endl;
        robotomyRequestForm->beSigned(bob);
        robotomyRequestForm->execute(bob);
        std::cout<<BLUE<<"---------------------------------------------------------------------------"<<RESET<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() << RESET<<std::endl;
    }
    
    //test presifential pardon
    try
    {
        presidentialPardonForm = yixin.makeForm("presidential pardon", "something");
        std::cout<<presidentialPardonForm->getName()<<std::endl;
        presidentialPardonForm->beSigned(bob);
        presidentialPardonForm->execute(bob);
        std::cout<<BLUE<<"---------------------------------------------------------------------------"<<RESET<<std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() << RESET<<std::endl;
    }
    
    
    //test shrubbery creation
    try
    {
        shrubberyCreationForm = yixin.makeForm("shrubbery creation", "something");
        std::cout<<shrubberyCreationForm->getName()<<std::endl;
        shrubberyCreationForm->beSigned(bob);
        shrubberyCreationForm->execute(bob);
        std::cout<<BLUE<<"---------------------------------------------------------------------------"<<RESET<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() << RESET<<std::endl;
    }
    
    
    //test random form
    try
    {
        someForm = yixin.makeForm("some", "something");
        std::cout<<someForm->getName()<<std::endl;
        someForm->beSigned(bob);
        someForm->execute(bob);
        std::cout<<BLUE<<"---------------------------------------------------------------------------"<<RESET<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() << RESET<<std::endl;
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