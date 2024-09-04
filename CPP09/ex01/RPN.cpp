/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 18:59:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/03 20:50:49 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include"RPN.hpp"

RPN::RPN()
{
    
}

RPN::~RPN()
{
    
}
RPN::RPN(const RPN &src):_stack(src._stack)
{
    std::cout<<"copy constructor called"<<std::endl;
}

RPN &RPN::operator=(const RPN &src)
{
    std::cout<<"copy operator called"<<std::endl;
    if (this != &src)
        this->_stack = src._stack;
    return *this;
}

int RPN::doCalculation(int num1, int num2, std::string ope)
{
    
}

RPN::RPN(std::string str)
{
    std::string operations = "+-*/";
    std::string::iterator it = str.begin();
    while(it != str.end())
    {
        if (isdigit(*it))
        {
            std::string tmp(1, *it);
            _stack.push(std::stoi(tmp));
            std::cout<<"digit: "<<*it<<std::endl;
        }
        else if (operations.find(*it) != std::string::npos)
        {
            std::string tmp2(1, *it);
            int num1 = _stack.top();
            _stack.pop();
            int num2 = _stack.top();
            _stack.pop();
            int  num = doCalculation(num1, num2, tmp2);
            _stack.push(num);
            std::cout<<"operations: "<<*it<<std::endl;
        }
        ++it;
    }
}

void RPN::run()
{
    
}