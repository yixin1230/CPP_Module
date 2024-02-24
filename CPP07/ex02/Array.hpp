/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 14:05:47 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 14:06:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
        int     _size;
        T       *_array;
        Array(int size):_size(size),_array(new T[size]){}
        ~Array(){delete[]_array;}

        T& operator[](int index)
        {
            if (index >= 0 && index < _size)
                return _array[index];
            throw std::
        }
};
#endif