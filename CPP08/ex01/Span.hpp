/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 20:42:05 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/28 22:36:55 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &src);
        ~Span();
        Span &operator=(Span const &src);

        // Member functions:
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();

    private:
        unsigned int    _n;
        std::set<int>   _mySet;
};

#endif