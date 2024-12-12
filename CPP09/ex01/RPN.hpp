/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 16:10:12 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/12 23:52:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef RNP_HPP
# define RNP_HPP

# include <iostream>
# include <stack>

//TO evaluate an expression in RPN, a stack-based algorithm is commonly used.
    //empty stack
    //scan the expression from left to right
    //if the current token is an operand, push it onto the stack
    //if the current token is an operator, pop the top two operands from the stack, apply the operator to them, and push the result back onto the stack
    //continue this process until all token have been processed.
    // the final result is the value remaining on the stack

class RPN
{
    public:
        RPN(std::string str);
        ~RPN();
        void run();

        RPN(const RPN &src); // not finished
        RPN &operator=(const RPN &src);//not finished
        int doCalculation(int num1, int num2, size_t ope);

        class ErrorInput: public std::exception
        {
            public:
                const char *what() const throw(){return("Error");}
        };
    private:
        RPN();
        std::stack <int> _stack;
};

# endif