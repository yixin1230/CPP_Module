/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 13:37:36 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/03 16:12:06 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
// T is a container of integers
// this function has to find the first occurrnce of the second parameter
// in the first parameter
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
        return it;
    throw std::runtime_error("value not found");
}
#endif