/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 14:05:47 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 16:03:17 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
        Array():_size(0),_array(NULL){}
        Array(int size):_size(size),_array(new T[size]){}
        Array(Array &src)
        {
            *this = src;
        }
        
        ~Array(){delete[]_array;}
        
        T& operator[](unsigned int index)
        {
            if (index >= 0 && index < _size)
                return _array[index];
            throw std::out_of_range("Index out of bounds");
        }
        
        Array &operator=(Array &src)
        {
            _size = src._size;
            _array = new T[src._size];
            for (unsigned int i = 0; i < _size; i++)
            {
                _array[i] = src._array[i];
            }
            return (*this);
        }
    private:
        unsigned int     _size;
        T                *_array;
    
};
#endif