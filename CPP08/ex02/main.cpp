/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 21:33:41 by yizhang       #+#    #+#                 */
/*   Updated: 2024/08/28 19:20:41 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// create a MutantStack class
// It will implemented in terms of a std::stack, offer all its member functions
// plus an additional feature: iterators

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    

    //test copy
    mstack.push(12);
    std::stack<int> s(mstack);
    std::cout<<"Top of s: "<<s.top()<<std::endl;

    mstack.push(30);
    MutantStack<int> mstackCopy(mstack);
    std::cout<<"Top of copy: "<<s.top()<<std::endl;
    return 0;
}