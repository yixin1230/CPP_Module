/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/27 21:33:22 by yizhang       #+#    #+#                 */
/*   Updated: 2024/07/13 17:28:36 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    //test on subject
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;// should be 2
    std::cout << sp.longestSpan() << std::endl;// should be 14
    std::cout<<std::endl;
    
    //some random number
    Span span(10000);
    for (int i = 0; i < 10000; i++)
        span.addNumber(rand());
    std::cout<<"Shortest span: "<<span.shortestSpan()<<std::endl;
    std::cout<<"Longest span: "<<span.longestSpan()<<std::endl;
    std::cout<<std::endl;

    //10 numbers with same number
    Span span2(6);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    span2.addNumber(1);
    std::cout<<"Shortest span: "<<span2.shortestSpan()<<std::endl;//should be 0
    std::cout<<"Longest span: "<<span2.longestSpan()<<std::endl;// should be 0
    std::cout<<std::endl;


    //add less than 10 numbers
    Span span4(10);
    span4.addNumber(1);
    span4.addNumber(2);
    span4.addNumber(3);
    span4.addNumber(4);
    std::cout<<"Shortest span: "<<span4.shortestSpan()<<std::endl;//should be 1
    std::cout<<"Longest span: "<<span4.longestSpan()<<std::endl;// should be 3
    std::cout<<std::endl;
    
    //error handling 
    //add more than N value, should throw an exception
    try
    {
        // Span span3(3);
        // span3.addNumber(1);
        // span3.addNumber(2);
        // span3.addNumber(3);
        // span3.addNumber(4);
        // std::cout<<"Shortest span: "<<span3.shortestSpan()<<std::endl;
        // std::cout<<"Longest span: "<<span3.longestSpan()<<std::endl;
        // std::cout<<std::endl;

        //if there are no numbers stored, throw exceptionSpan span3(3);
        // Span span5(3);
        // std::cout<<"Shortest span: "<<span5.shortestSpan()<<std::endl;
        // std::cout<<"Longest span: "<<span5.longestSpan()<<std::endl;
        // std::cout<<std::endl;
        
        //if there are only one number stored, throw exception
        // Span span6(3);
        // span6.addNumber(1);
        // std::cout<<"Shortest span: "<<span6.shortestSpan()<<std::endl;
        // std::cout<<"Longest span: "<<span6.longestSpan()<<std::endl;
        // std::cout<<std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr <<RED<< e.what() <<RESET<< '\n';
    }
}