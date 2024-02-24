/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 01:26:20 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 15:37:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename B, typename C>
void iter(A array, B length, C function)
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}

//test function
template<typename T>
void printIt(T it)
{
    std::cout<<it<<", ";
}
#endif