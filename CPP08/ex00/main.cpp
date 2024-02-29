/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 13:36:59 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/29 12:52:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    std::vector<int> array = {1,2,3,4,5,6};
    std::list<int> alist = {2,3,4};
    
    //it will found value 5 inside vector
    std::vector<int>::iterator it = easyfind(array, 5);
    std::cout<<*it<<std::endl;

    //it will found value 2 inside list
    std::list<int>::iterator it3 = easyfind(alist, 2);
    std::cout<<*it3<<std::endl;

    try
    {
        std::vector<int>::iterator it2 = easyfind(array, 0);
        std::cout<<*it2<<std::endl;

        std::list<int>::iterator it4 = easyfind(alist, 5);
        std::cout<<*it4<<std::endl;
    }
    catch(const std::exception &e)
    {
        //value not found
        std::cerr<<e.what()<<std::endl;
    }
}