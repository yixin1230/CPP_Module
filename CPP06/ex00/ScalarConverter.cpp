/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 15:16:52 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/22 00:42:45 by yizhang       ########   odam.nl         */
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

static int isSymbol(int type)
{
    if (type < 3)
        return SYMBOL;
    else
        return NOTSYMBOL;
}

static void toInt(long double value, int type)
{
    std::cout<<"int:    ";
    if (value > INT_MAX || value < INT_MIN || isSymbol(type) == SYMBOL)
        std::cout<<"impossible";
    else
        std::cout<<static_cast<int>(value);
    std::cout<<std::endl;
}

static void toChar(long double value, int type)
{
    std::cout<<"char:   ";
    if (value < 0 || value > 127 || isSymbol(type) == SYMBOL)
        std::cout<<"impossible";
    else if ((value >= 0 && value <= 31))
        std::cout<<"not displayable";
    else
        std::cout<<"'"<<static_cast<char>(value)<<"'";
    std::cout<<std::endl;
}

static void toFloat(long double value, int type)
{
    std::cout<<"float:  ";
        if (type == NANF)
        std::cout<<"nanf";
    else if (type == N_INF)
        std::cout<<"-inff";
    else if (type == P_INF)
        std::cout<<"+inff";
    else if (type == WHOLE_NB)
        std::cout<<static_cast<float>(value)<<".0f";
    else if (type == DOUBLE)
        std::cout<<static_cast<float>(value)<<"f";
    else if (type == FLOAT)
        std::cout<<"value";
    else
        std::cout<<static_cast<float>(value);
    std::cout<<std::endl;
}

static void toDouble(long double value, int type)
{
    std::cout<<"double: ";
    if (type == NANF)
        std::cout<<"nan";
    else if (type == N_INF)
        std::cout<<"-inf";
    else if (type == P_INF)
        std::cout<<"+inf";
    else
        std::cout<<static_cast<double>(value);
    std::cout<<std::endl;
}

static int typeChecker(std::string input)
{
    if (input == "nan" || input == "nanf")
        return NANF;
    if (input == "-inff" || input == "-inf")
        return N_INF;
    if (input == "+inff" || input == "+inf")
        return P_INF;
    if (input.find(".") == std::string::npos)
       return WHOLE_NB;
    if (input.find("f") != std::string::npos)
        return FLOAT;
    if (input.find(".")!= std::string::npos && input.find("f") == std::string::npos)
        return DOUBLE;
    return 6;
}

void ScalarConverter::convert(std::string input)
{
    //nan standing for not a number
    //nan a not a number value of type float
    std::stringstream sso;
    sso<<input;
    std::string rm_f;
    long double value;
    int type;

    type = typeChecker(input);
    sso >> value;

    toChar(value, type);
    toInt(value, type);
    toFloat(value, type);
    toDouble(value, type);
}