/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 12:31:35 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 18:02:10 by yizhang       ########   odam.nl         */
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
        Bureaucrat bob("Bob", 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<std::endl;
    }
    
    return 0;
}