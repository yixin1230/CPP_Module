/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 20:00:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/08/30 13:42:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(int argc)
{
    std::cout<<"BitcoinExchange constructor called."<<std::endl;
    if (argc != 2)
        throw CouldNotOpenFile();
    openCsvFile();
    
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout<<"BitcoinExchange deconstructor called."<<std::endl;
}

void BitcoinExchange::openCsvFile()
{
    std::fstream csv("data.csv", std::ios::in);
    if (csv.is_open())
    {
        //getline();
    }
    else
        throw CouldNotOpenFile();
}

void BitcoinExchange::openInputFile(char *str)
{
    std::fstream input(str, std::ios::in);
    if (input.is_open())
    {
        
    }
    else
        throw CouldNotOpenFile();
}

void BitcoinExchange::printMessage()
{
    std::cout<<" => "<<" = "<<std::endl;
}


void BitcoinExchange::run(char **argv)
{
    openInputFile(argv[1]);
    printMessage();
}