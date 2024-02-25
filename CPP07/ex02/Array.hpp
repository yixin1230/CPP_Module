/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 14:05:47 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/25 20:42:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
    
        //Construction with on parameter
        Array():_size(0),_array(NULL){}

        //Construction with an unsigned int n as a parameter
        Array(unsigned int size):_size(size),_array(new T[size]){}

        //Construction by copy and assignment operator.
        //In both cases, modifying either the original array or its copy after copying musn't affect the other array.
        Array(const Array &src)
        {
            _size = src._size;
            _array = new T[src._size];
            for (unsigned int i = 0; i < _size; i++)
            {
                _array[i] = src._array[i];
            }
            *this = src;
        }
        
        ~Array(){delete[]_array;}
        
        //Must use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden.
        T& operator[](unsigned int index)
        {
            if (index >= 0 && index < _size)
                return _array[index];
            throw std::out_of_range("Index out of bounds");
        }
        
        Array &operator=(Array const &src)
        {
            if (this != &src)
            {
                delete [] _array;
                _size = src._size;
                _array = new T[src._size];
                for (unsigned int i = 0; i < _size; i++)
                {
                    _array[i] = src._array[i];
                }
            }
            return (*this);
        }

        unsigned int size()
        {
            return (_size);
        }
    private:
        unsigned int     _size;
        T                *_array;
    
};
#endif