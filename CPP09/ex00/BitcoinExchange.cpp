/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 20:00:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/08/29 21:14:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(int argc, char **argv)
{
    std::cout<<"BitcoinExchange constructor called."<<std::endl;
    if (argc != 2)
        throw CouldNotOpenFile();
    std::ofstream input(argv[1], std::ios::in);
    if (input.is_open())
    {

    }
    else
        throw CouldNotOpenFile();
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout<<"BitcoinExchange deconstructor called."<<std::endl;
}
