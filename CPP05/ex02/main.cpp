/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 12:31:35 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/26 12:16:45 by yizhang       ########   odam.nl         */
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
        Bureaucrat jim("Jim", 20);
        Bureaucrat sam("Sam", 136);
        
        //sign 25, execute 5
        PresidentialPardonForm pardon("Turkeys");
        bob.signForm(pardon);
        bob.executeForm(pardon);
        std::cout<<std::endl;

        //sign 72, execute 45
        RobotomyRequestForm human("human");
        jim.signForm(human);
        jim.executeForm(human);
        std::cout<<std::endl;

        //sign 145, execute 137
        ShrubberyCreationForm mars("Mars");
        sam.signForm(mars);
        sam.executeForm(mars);
        std::cout<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<RED << e.what() <<RESET<<std::endl;
    }
    
    return 0;
}