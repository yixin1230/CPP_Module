/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 18:59:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/02 20:00:17 by yizhang       ########   odam.nl         */
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
    std::string::iterator it = str.begin();
    while(it != str.end())
    {
        std::cout<<*it<<std::endl;
        ++it;
    }
}

void RPN::run()
{
    
}