/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 20:44:43 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/28 23:35:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout<<"default constructor called"<<std::endl;
}

Span::Span(unsigned int n):_n(n)
{
    std::cout<<"constructor called"<<std::endl;
}

Span::Span(Span const &src)
{
    *this = src;
    std::cout<<"copy constructor called"<<std::endl;
}

Span::~Span()
{
    std::cout<<"destructor called"<<std::endl;
}

Span &Span::operator=(Span const &src)
{
    _n = src._n;
    _mySet = src._mySet;
    _myVec = src._myVec;
    //In the context of copying a std::set in C++, you do not need to manually override the assignment operator (=).
    //The Standard Template Library (STL) containers, including std::set, already define copy assignment operators that perform deep copies of their contents. 
    //When you use the assignment operator to copy one std::set to another, the STL's implementation of the copy assignment operator for std::set is automatically used to create a deep copy.
    //This means each element of the set is copied, and the two sets are completely independent of each other after the copy.
    std::cout<<"copy operator called"<<std::endl;
    return (*this);
}

// Member functions:
void Span::addNumber(int nb)
{
    if (_myVec.size() + 1 <= _n)
    {
        std::set<int>::iterator it = std::find(_mySet.begin(),_mySet.end(),nb);
        _mySet.insert(nb);
        _myVec.push_back(nb); // add nb to the end of the vector
    }
    else
        throw std::out_of_range("the container is full");
}

int Span::shortestSpan()
{
    if (_myVec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    if (_myVec.size() != _mySet.size())
        return (0);
    //subtract two by two
}

int Span::longestSpan()
{
    if (_myVec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    if (_mySet.size() == 1)
        return (0);
    return (*_mySet.end() - *_mySet.begin());
}
