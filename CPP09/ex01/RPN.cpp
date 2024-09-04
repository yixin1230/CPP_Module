/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 18:59:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/04 13:52:45 by yizhang       ########   odam.nl         */
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

int RPN::doCalculation(int num1, int num2, int ope)
{
    switch(ope)
    {
        case 0:
            return (num2 + num1);
        case 1:
            return (num2 - num1);
        case 2:
            return (num2 * num1);
        case 3:
            return (num2 / num1);
    }
    return 0;
}

RPN::RPN(std::string str)
{
    int num = 0;
    std::string operations = "+-*/";
    std::string::iterator it = str.begin();
    while(it != str.end())
    {
        if (isdigit(*it))
        {
            std::string tmp(1, *it);
            _stack.push(std::stoi(tmp));
            // std::cout<<"digit: "<<*it<<std::endl;
        }
        else if (operations.find(*it) != std::string::npos)
        {
            int ope = operations.find(*it);
            int num1 = _stack.top();
            _stack.pop();
            int num2 = _stack.top();
            _stack.pop();
            num = doCalculation(num1, num2, ope);
            _stack.push(num);
            // std::cout<<"total: "<<num<<std::endl;
        }
        else if (isspace(*it))
            ++it;
        else
            throw ErrorInput();
        ++it;
    }
    std::cout<<num<<std::endl;
}
