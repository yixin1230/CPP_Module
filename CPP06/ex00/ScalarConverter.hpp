/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 14:26:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/21 23:17:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

enum
{
    NANF,
    P_INF,
    N_INF,
    WHOLE_NB,
    DOUBLE,
    FLOAT,
    SYMBOL,
    NOTSYMBOL,
};

class ScalarConverter
{
    public:
        static void convert(std::string input);
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter &operator=(const ScalarConverter &src);
};

#endif