/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 10:20:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/09 17:47:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"form.hpp"

int main()
{
    //Test if high grade Bureaucrat can sign a low grade form
    form a("A", false, 150 , 150);
    Bureaucrat jim("Jim",1);
    a.beSigned(jim);
    jim.signform(a);
    std::cout<<a.getSigned()<<std::endl;

    //Test if a low grade Bureaucrat can not sign a high grade form
    form b("B", false, 99 , 99);
    Bureaucrat bob("Bob",100);
    b.beSigned(bob);
    bob.signform(b);
    std::cout<<b.getSigned()<<std::endl;

    try
    {
        //Test if form exception works with grade higher than 1
        //form c("C", false, 0 , 0);
        
        //Test if form exception works with grade lower than 150
        //form d("D", false, 151 , 151);

        //Test if Bureaucrat exception work with grade higher than 1
        //Bureaucrat amy("Amy", 0);
        
        //Test if Bureaucrat exception works with grade lower than 150
        //Bureaucrat cyan("Cyan", 153);
        
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(form::GradeTooHighException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(form::GradeTooLowException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    return 0;
}