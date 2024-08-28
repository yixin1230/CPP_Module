/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/29 13:57:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/08/28 18:34:49 by yizhang       ########   odam.nl         */
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
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
        iterator size(){return c.size();}

        
        
    private:
    protected:
        T2 c;
};

#endif
