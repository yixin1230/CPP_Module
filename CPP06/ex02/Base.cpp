/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 20:08:24 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/23 23:16:28 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
//to use anything you like for the random choice implementation
Base *generate(void)
{
    int i = rand() % 3;
    switch (i)
    {
        case 0:
            return (dynamic_cast<Base*>(new A()));
        case 1:
            return (dynamic_cast<Base*>(new B()));
        case 2:
            return (dynamic_cast<Base*>(new C()));
        default:
            return (NULL);
    }
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
    else
        std::cout<<"Wrong type"<<std::endl;
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
//Using a pointer inside this function is forbidden.
void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout<<"A"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout<<"B"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout<<"C"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
