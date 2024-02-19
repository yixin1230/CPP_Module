/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/18 14:26:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/19 23:07:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

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