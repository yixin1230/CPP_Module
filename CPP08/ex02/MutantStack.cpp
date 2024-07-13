/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/13 17:35:32 by yizhang       #+#    #+#                 */
/*   Updated: 2024/07/13 17:47:42 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename T2>
MutantStack<T,T2>::MutantStack()
{
    std::cout<<"Default constructor called"<<std::endl;
}

template <typename T, typename T2>
MutantStack<T,T2>::~MutantStack()
{
    std::cout<<"Default destructor called"<<std::endl;
}

template <typename T, typename T2>
MutantStack &MutantStack<T,T2>::MutantStack(MutantStack &src)
{
    
}

