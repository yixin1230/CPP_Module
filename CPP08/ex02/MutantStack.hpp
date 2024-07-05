/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/29 13:57:01 by yizhang       #+#    #+#                 */
/*   Updated: 2024/03/29 15:46:06 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename T2 = std::deque<T>>
//deque: is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.

class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack &MutantStack(MutantStack &src);
        MutantStack &operator=(MutantStack &src);
    private:
};

#endif
