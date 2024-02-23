/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/23 20:08:24 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/23 21:19:38 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    
}

//It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
//to use anything you like for the random choice implementation
Base *generate(void)
{
    Base *base;
    int i = rand() % 2;
    switch (i)
    {
        case 0:
            base = dynamic_cast<Base*>(new A());
        case 1:
            base = dynamic_cast<Base*>(new B());
        case 2:
            base = dynamic_cast<Base*>(new C());
        default:
            return (NULL);
    }
    return base;
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
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
}
