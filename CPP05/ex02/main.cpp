/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 12:31:35 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/13 21:56:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    try
    {
        Bureaucrat bob("Bob", 1);
        PresidentialPardonForm pardon("Turkeys");
        pardon.beSigned(bob);
        bob.signform(pardon);
        bob.executeForm(pardon);
        std::cout<<std::endl;

        Bureaucrat jim("Jim", 1);
        RobotomyRequestForm human("human");
        human.beSigned(jim);
        jim.signform(human);
        jim.executeForm(human);
        std::cout<<std::endl;

        Bureaucrat sam("Sam", 1);
        ShrubberyCreationForm mars("Mars");
        mars.beSigned(sam);
        sam.signform(mars);
        sam.executeForm(mars);
        std::cout<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<RED << e.what() <<RESET<<std::endl;
    }
    
    return 0;
}