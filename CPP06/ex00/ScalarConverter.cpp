/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 15:16:52 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/22 16:10:15 by yizhang       ########   odam.nl         */
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
    else if (type == DOUBLE)
        std::cout<<static_cast<float>(value)<<"f";
    else if (type == WHOLE_NB || type == CHAR)
        std::cout<<static_cast<float>(value)<<".0f";
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
    else if (type == WHOLE_NB || type == CHAR)
        std::cout<<static_cast<double>(value)<<".0";
    else
        std::cout<<static_cast<double>(value);
    std::cout<<std::endl;
}

static int typeChecker(std::string input)
{
    if (input[input.size() - 1] == '.')
        return ERROR;
    if (input.size() == 1 && (input[0] >= 0 || input[0] <= 127 ))
        return CHAR;
    if (input == "nan" || input == "nanf")
        return NANF;
    if (input == "-inff" || input == "-inf")
        return N_INF;
    if (input == "+inff" || input == "+inf")
        return P_INF;
    if (input[input.size() - 1] == 'f' && input.find(".") != std::string::npos)
        return FLOAT;
    if ((input[input.size() - 1] == '0' && input[input.size() - 2] == '.') || input.find(".") == std::string::npos)
        return WHOLE_NB;
    if (input.find(".") != std::string::npos && input.find("f") == std::string::npos)
        return DOUBLE;
    return ERROR;
}

void ScalarConverter::convert(std::string input)
{
    //nan standing for not a number
    //nan a not a number value of type float
    std::stringstream sso;
    std::string newInput;
    long double value;
    int type;

    type = typeChecker(input);
    newInput = input;
    if (type == ERROR)
    {
        std::cout<<RED<<"input error"<<RESET<<std::endl;
        return ;
    }
    if (type == FLOAT)
    {
        newInput = input.substr(0, input.length() - 1);
        type = typeChecker(newInput);
    }
    sso << newInput;
    sso >> value;
    if (type == CHAR)
    {
        int tmp = input[0];
        value = static_cast<long double>(tmp);
        type = typeChecker(newInput);
    }
    toChar(value, type);
    toInt(value, type);
    toFloat(value, type);
    toDouble(value, type);
}