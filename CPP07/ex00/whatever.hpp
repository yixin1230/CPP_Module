/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 00:49:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 01:26:41 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template<typename T>
void swap(T &value1, T &value2)
{
    T tmp;
    tmp = value1;
    value1 = value2;
    value2 = tmp;
}

template<typename T>
T min(T value1, T value2)
{
    if (value1 < value2)
        return value1;
    return value2;
}

template<typename T>
T max(T value1, T value2)
{
    if (value1 > value2)
        return value1;
    return value2;
}

#endif