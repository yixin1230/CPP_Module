/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 16:26:02 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/19 21:49:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout<<"Usage: ./convert scalar"<<std::endl;
        return 0;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}