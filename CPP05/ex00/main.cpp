/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:14:06 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/31 09:33:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("Bob", 150);
    Bureaucrat c("Pikachu", 1);
    try
    {
        //Bureaucrat b("Jim", 0);
        //a.decrement();
        //c.increment();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout<< e.what()<<std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    return 0;
}