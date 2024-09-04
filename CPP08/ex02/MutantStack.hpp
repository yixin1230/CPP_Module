/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/29 13:57:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/03 18:26:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

// deque: is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.
// let the stack to have an underlying container
template <typename T, typename T2 = std::deque<T>>
class MutantStack: public std::stack<T, T2>
{
    public:
        MutantStack()
        {
            std::cout<<"Default constructor called"<<std::endl;
        }
        ~MutantStack()
        {
            std::cout<<"Default destructor called"<<std::endl;
        }
        
        // typedefs for iterator types
        typedef typename T2::iterator iterator;
        // This creates a typedef named 'iterator' that refers to the iterator type of the underlying container 'T2'.
        // This allows the user to easily use the container's iterators without needing to know the exact type of the underlying container.
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
        // In 'std::stack' the underlying container is usually a private or protected member named 'c'
        //This name is not standardized by the C++ standard itself but is commonly used in most implementations of the C++ standard library.
        //the functions begin() and end() use this->c to access the underlying container's iterators

    private:
};

#endif
