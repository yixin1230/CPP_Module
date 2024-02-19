/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 15:16:52 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/19 23:11:48 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
    (void)src;
    return (*this);
}

// void toInt(double value, int sysbol)
// {
    
// }

void ScalarConverter::convert(std::string input)
{
    std::stringstream sso;
    sso<<input;
    int i;
    sso>>i;
    std::cout<<i<<std::endl;
}