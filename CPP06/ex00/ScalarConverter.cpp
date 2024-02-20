/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 15:16:52 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/20 23:09:24 by yizhang       ########   odam.nl         */
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

static void toInt(long double value, int symbol)
{
    (void)symbol;
    std::cout<<"int: ";
    if (value > INT_MAX || value < INT_MIN)
        std::cout<<"impossible";
    else
        std::cout<<static_cast<int>(value);
    std::cout<<std::endl;
}

static void toChar(long double value, int symbol)
{
    (void)symbol;
    std::cout<<"char: ";
    if (value < 0 || value > 127)
        std::cout<<"impossible";
    else if ((value >= 0 && value <= 31 )|| value == 127)
        std::cout<<"not displayable";
    else
        std::cout<<"'"<<static_cast<char>(value)<<"'";
    std::cout<<std::endl;
}

static void toFloat(long double value, int symbol)
{
    (void)symbol;
    std::cout<<"float: ";
    std::cout<<static_cast<float>(value);
    std::cout<<std::endl;
}

static void toDouble(long double value, int symbol)
{
    (void)symbol;
    std::cout<<"double: ";
    std::cout<<static_cast<double>(value);
    std::cout<<std::endl;
}

void ScalarConverter::convert(std::string input)
{
    std::stringstream sso;
    //std::string remainder;
    sso<<input;
    long double value;
    int symbol = 0;
    sso >> value;
    toChar(value, symbol);
    toInt(value, symbol);
    toFloat(value, symbol);
    toDouble(value, symbol);

}