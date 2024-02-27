/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 10:20:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/26 12:14:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

int main()
{
    //Test if high grade Bureaucrat can sign a low grade form
    Form a("A", false, 150 , 150);
    Bureaucrat jim("Jim",1);
    a.beSigned(jim);
    jim.signForm(a);
    std::cout<<a.getSigned()<<std::endl;

    //Test if a low grade Bureaucrat can not sign a high grade form
    Form b("B", false, 99 , 99);
    Bureaucrat bob("Bob",100);
    b.beSigned(bob);
    bob.signForm(b);
    std::cout<<b.getSigned()<<std::endl;

    try
    {
        //Test if form exception works with grade higher than 1
        //Form c("C", false, 0 , 0);
        
        //Test if form exception works with grade lower than 150
        //Form d("D", false, 151 , 151);

        //Test if Bureaucrat exception work with grade higher than 1
        //Bureaucrat amy("Amy", 0);
        
        //Test if Bureaucrat exception works with grade lower than 150
        //Bureaucrat cyan("Cyan", 153);
        
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<<RED<<e.what()<<RESET<<std::endl;
    }
    return 0;
}