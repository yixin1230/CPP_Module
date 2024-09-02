/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 20:00:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/02 12:17:40 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(int argc)
{
    if (argc != 2)
        throw CouldNotOpenFile();
    openCsvFile();
}

BitcoinExchange::~BitcoinExchange()
{

}

std::pair<std::string, std::string> BitcoinExchange::tokenize(std::string line, std::string del)
{
    std::pair<std::string, std::string> p;
    unsigned long start = 0;
    unsigned long end = line.find(del);
    if (!end)
    {
        p = {"0","0"};
        return (p);
    }
    std::string key;
    std::string value;
    key  = line.substr(start, end - start);
    start = end + del.size();
    end = line.size();
    value = line.substr(start, end - start);
    p =  {key, value};
    return p;
}

bool BitcoinExchange::checkDate(std::string line)
{

    std::pair<std::string, std::string> p;
    p = tokenize(line, "-");
    if (p.first.size() != 4)
    {
        std::cout<<"Error: bad input =>"<<line<<std::endl;
        return false;
    }
    p = tokenize(p.second, "-");
    if (p.first.size() != 2 || std::stoi(p.first) > 12 || p.second.size() != 2 || std::stoi(p.second) > 31)
    {
        std::cout<<"Error: bad input => "<<line<<std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::checkData(std::pair<std::string, std::string> p)
{
    if (!checkDate(p.first))
        return false;
    if (p.second == "\0")
    {
        std::cout<<"Error: no number in here"<<std::endl;
        return false;
    }
    if (std::stol(p.second) < 0)
    {
        std::cout<<"Error: not a positive number."<<std::endl;
        return false;
    }
    if (std::stol(p.second) > 2147483647)
    {
        std::cout<<"Error: too large a number."<<std::endl;
        return false;
    }
    return true;
}

//template calulation

void BitcoinExchange::doCalculation(std::pair<std::string, std::string> p)
{
    auto match = _data.find(p.first);
    if(match == _data.end())
    {
        std::map<std::string, std::string>::iterator it = _data.begin();
        while (it != _data.end())
        {
            std::pair <std::string, std::string> token;
            std::pair <std::string, std::string> token2;
            token = tokenize(p.first, "-");
            token2 = tokenize(it->first, "-");
            if (token.first == token2.first && token.second.substr(0,2) == token2.second.substr(0,2) 
                && std::stol(token.second.substr(3,2)) < std::stol(token2.second.substr(3,2)))
            {
                std::map<std::string, std::string>::iterator it2 = _data.upper_bound(it->first);
                int num1 = std::stol(it2->second);
                int num2 = std::stol(p.second);
                int num = num1 * num2;
                std::cout<<num<<std::endl;
                return ;
            }
            // std::cout<<"p:  "<<p.first<<"    "<<p.second<<std::endl;
            // std::cout<<"it:  "<<it->first<<"    "<<it->second<<std::endl;
            
            // std::string inDay = p.first.substr(8,2);
            // std::string dataDay = it->first.substr(8,2);
            
            // if (inYear == dataYear && inMonth == dataMonth && inDay < dataDay)
            // {
            //     std::map<std::string, std::string>::iterator it2 = _data.upper_bound(it->first);
            //     int num1 = std::stol(it2->second);
            //     int num2 = std::stol(p.second);
            //     int num = num1 * num2;
            //     std::cout<<num<<std::endl;
            //     return ;
            // }
            ++it;
        }
    }
    else
    {
        int num1 = std::stol(match->second);
        int num2 = std::stol(p.second);
        int num = num1 * num2;
        std::cout<<num<<std::endl;
    }
    std::cout<<"num"<<std::endl;
}

void BitcoinExchange::openCsvFile()
{
    std::string line;
    std::fstream csv("data.csv", std::ios::in);
    if (csv.is_open())
    {
        while (!csv.eof())
        {
            getline(csv, line);
            _data.insert(tokenize(line, ","));
        }
        csv.close();
    }
    else
        throw CouldNotOpenFile();
}

void BitcoinExchange::openInputFile(char *str)
{
    int i = 0;
    std::string line;
    std::fstream input(str, std::ios::in);
    if (input.is_open())
    {
        while (!input.eof())
        {
            getline(input, line);
            std::pair<std::string, std::string> p = tokenize(line, " | ");
            if (i == 0)
            {
                if (p.first != "date" && p.second != "value")
                {
                    std::cout<<"Error : bad input => "<<line<<std::endl;
                    input.close();
                    return ;
                }
            }
            else
            {
                if (checkData(p))
                {
                    std::cout<<p.first<< " => "<<p.second<<" = ";
                    // std::cout<<"p:  "<<p.first<<"    "<<p.second<<std::endl;
                    doCalculation(p);
                }
            }
            i++;
        }
        input.close();
    }
    else
        throw CouldNotOpenFile();
}

void BitcoinExchange::printMessage()
{
    std::map<std::string, std::string>::iterator itr;
    for (itr = _data.begin(); itr != _data.end(); ++itr)
    {
        std::cout<<itr->first<<" => "<<" = "<<itr->second<<std::endl;
    }
}


void BitcoinExchange::run(char **argv)
{
    openInputFile(argv[1]);
    // printMessage();
}