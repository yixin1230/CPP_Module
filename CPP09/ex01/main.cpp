/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 23:59:12 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/04 13:54:36 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
            throw RPN::ErrorInput();
        RPN program(argv[1]);
    }
    catch(RPN::ErrorInput &e)
    {
        std::cout <<e.what()<<std::endl;
    }
    return 0;
}