/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 14:26:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/22 16:02:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

enum
{
    NANF,
    P_INF,
    N_INF,
    WHOLE_NB,
    CHAR,
    DOUBLE,
    FLOAT,
    SYMBOL,
    NOTSYMBOL,
    ERROR,
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