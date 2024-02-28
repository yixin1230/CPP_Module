/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 20:44:43 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/28 22:36:49 by yizhang       ########   odam.nl         */
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
    std::cout<<"constructor called"<<std::endl;
}

Span::~Span()
{
    std::cout<<"destructor called"<<std::endl;
    
}

Span &Span::operator=(Span const &src)
{
    std::cout<<"copy operator called"<<std::endl;
    
}


// Member functions:
void Span::addNumber(int nb)
{
    
}

int Span::shortestSpan()
{
    
}

int Span::longestSpan()
{
    
}
