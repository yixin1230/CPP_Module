/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 20:42:05 by yizhang       #+#    #+#                 */
/*   Updated: 2024/07/13 17:24:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <climits>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

//Span class can store a max of N unsigned int
// N is an unsigned int
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
        // to add a single number to the Span,
        // Any attempt to add a new element if there are already N elements stored should throw an exception
        int shortestSpan();
        int longestSpan();
        //find the shorted span and the longest span
        //if there are no numbers stored, or only one ,no span can be found, throw exception
    private:
        unsigned int    _n;
        std::set<int>   _mySet;
        std::vector<int>_myVec;
};

#endif