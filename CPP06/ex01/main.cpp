/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 16:26:02 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/23 18:21:30 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.nb = 88;
    data.someThing = "Hello";

    //Use serialize() on the address of the Data object and pass it return value to deserialize().
    uintptr_t p = Serializer::serialize(&data);
    Data *data2 = Serializer::deserialize(p);
    
    std::cout<<GREEN<<"after type cast:"<<RESET<<std::endl;
    std::cout<<"value:"<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<"data2 nb: "<<data2->nb<<std::endl;
    std::cout<<"data2 string: "<<data2->someThing<<std::endl;
    std::cout<<std::endl;

    //Then, ensure the retrun value of deserialize() compares equal to the original pointer.
    std::cout<<"address:"<<std::endl;
    std::cout<<"data2: "<<data2<<std::endl;
    std::cout<<"data:  "<<&data<<std::endl;
    std::cout<<"p:     "<<p<<std::endl;
    return 0;
}