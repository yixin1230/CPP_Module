/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 20:00:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/02 16:07:10 by yizhang       ########   odam.nl         */
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
    if (std::stol(p.second) > 1000)
    {
        std::cout<<"Error: too large a number."<<std::endl;
        return false;
    }
    return true;
}

//template calulation
void BitcoinExchange::doMulti(std::__1::string num1, std::__1::string num2)
{
    if (num1.find('.') || num2.find('.'))
    {
        float n1 = std::stof(num1);
        float n2 = std::stof(num2);
        float n = n1*n2;
        std::cout<<n<<std::endl;
    }
    else
    {
        int n1 = std::stof(num1);
        int n2 = std::stof(num2);
        int n = n1*n2;
        std::cout<<n<<std::endl;
    }
}

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
                && std::stoi(token.second.substr(3,2)) < std::stoi(token2.second.substr(3,2)))
            {
                it--;
                doMulti(it->second, p.second);
                return ;
            }
            ++it;
        }
    }
    else
        doMulti(match->second, p.second);
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

void BitcoinExchange::run(char **argv)
{
    openInputFile(argv[1]);
}