/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 20:00:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/13 05:03:50 by yizhang       ########   odam.nl         */
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

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src):_data(src._data)
{
    std::cout<<"copy constructor called"<<std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    std::cout<<"copy operator called"<<std::endl;
    if (this != &src)
        _data = src._data;
    return *this;
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
    key.erase(std::remove(key.begin(), key.end(), ' '), key.end());
    value.erase(std::remove(value.begin(), value.end(), ' '), value.end());
    p =  {key, value};
    return p;
}

bool isValidDate(const std::string& dateStr) {
    // Define a date format: YYYY-MM-DD
    //creates a special stream (dateStream) to read the date string
    std::istringstream dateStream(dateStr);
    //tries to parse the date into a time structure (tm) using the format "YYYY-MM-DD
    std::tm tm = {};
    dateStream >> std::get_time(&tm, "%Y-%m-%d");

    //checks if the parsing worked correctly
    if (dateStream.fail()) {
        return false;
    }

    // Check if the date is valid in the calendar
    tm.tm_isdst = -1; // Disable daylight saving time
    std::time_t time = std::mktime(&tm);

    if (time == -1) {
        return false; // Invalid date
    }

    // Check if the reconstructed date matches the original
    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &tm);
    return dateStr == buffer;
}
//std::find_if() will return s.end() (the position after the last character) only if it couldn't find any non-digit characters.
// So if find_if() reaches the end without finding non-digits, we know the string contains only numbers.
bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}
bool BitcoinExchange::checkData(std::pair<std::string, std::string> p)
{
    if (!isValidDate(p.first))
    {
        std::cout<<"Error: Invalid Date."<<std::endl;
        return false;
    }
    if (p.second == "\0")
    {
        std::cout<<"Error: no number in here"<<std::endl;
        return false;
    }
    if ((!is_number(p.second) && p.second.find(".") != std::string::npos) || (std::count(p.second.begin(), p.second.end(), '_') > 1))
    {
        std::cout<<"Error: bad input."<<std::endl;
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
            std::pair<std::string, std::string> p = tokenize(line, "|");
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