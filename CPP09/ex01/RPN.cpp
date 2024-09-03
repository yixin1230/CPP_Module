/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 18:59:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/02 20:09:25 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include"RPN.hpp"

RPN::RPN()
{
    
}

RPN::~RPN()
{
    
}

RPN::RPN(std::string str)
{
    std::string operations = "+-*/";
    std::string::iterator it = str.begin();
    while(it != str.end())
    {
        if (isdigit(*it))
            std::cout<<"digit: "<<*it;
        else if (operations.find(*it))
            std::cout<<"operations: "<<*it;
        ++it;
    }
}

void RPN::run()
{
    
}