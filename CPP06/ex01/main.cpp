/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 16:26:02 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/23 13:32:42 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data src;
    src.nb = 88;
    src.someThing = "Hello";
    Data *data = &src;
    uintptr_t p = 9;

    std::cout<<GREEN<<"before type cast:"<<RESET<<std::endl;
    std::cout<<"value:"<<std::endl;
    std::cout<<"data: "<<data<<std::endl;
    std::cout<<"data nb: "<<data->nb<<std::endl;
    std::cout<<"data string: "<<data->someThing<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"address:"<<std::endl;
    std::cout<<"data: "<<&data<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<std::endl;

    //after
    data = Serializer::deserialize(p);
    //p = Serializer::serialize(data);
    
    std::cout<<GREEN<<"after type cast:"<<RESET<<std::endl;
    std::cout<<"value:"<<std::endl;
    std::cout<<"data: "<<data<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<"data nb: "<<data->nb<<std::endl;
    std::cout<<"data string: "<<data->someThing<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"address:"<<std::endl;
    std::cout<<"data: "<<&data<<std::endl;
    std::cout<<"p: "<<&p<<std::endl;
    free(data);
    return 0;
}