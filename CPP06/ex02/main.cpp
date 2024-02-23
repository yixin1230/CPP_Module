/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 16:26:02 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/23 23:28:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    
    Base *base = generate();
    identify(base);//attempting to cast to an incorrect derived type//return null
    identify(*base);//attempting to cast to an incorrect derived type//throw a std::bad_cast

    Base *base2 = generate();
    identify(base2);
    identify(*base2);

    Base *base3 = generate();
    identify(base3);
    identify(*base3);

    Base *base4 = generate();
    identify(base4);
    identify(*base4);


    delete base;
    delete base2;
    delete base3;
    delete base4;

    // The reason is that I can have a null pointer, but not a null reference
    //any reference has to be bound to an object
    //when dynamic_cast for a pointer type fails it return a null pointer and the caller can check for that,
    //but when it fails for a reference type it can't return a null reference, an exception is the only reasonable way to signal a problem
    // prints the actual type of the object
    return 0;
}