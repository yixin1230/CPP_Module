/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 21:33:22 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/29 14:54:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    //some random number
    Span span(10000);
    for (int i = 0; i < 10000; i++)
        span.addNumber(rand());
    std::cout<<"Shortest span: "<<span.shortestSpan()<<std::endl;
    std::cout<<"Longest span: "<<span.longestSpan()<<std::endl;

    //10 numbers with same number
    Span span2(6);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    std::cout<<"Shortest span: "<<span2.shortestSpan()<<std::endl;
    std::cout<<"Longest span: "<<span2.longestSpan()<<std::endl;

    //error handling 
    //add more than N value
    Span span3(3);
    span3.addNumber(1);
    span3.addNumber(2);
    span3.addNumber(3);
    span3.addNumber(4);
    std::cout<<"Shortest span: "<<span3.shortestSpan()<<std::endl;
    std::cout<<"Longest span: "<<span3.longestSpan()<<std::endl;
}