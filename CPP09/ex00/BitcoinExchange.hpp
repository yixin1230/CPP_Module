/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 19:58:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/01 19:34:28 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <stdexcept>
# include <iostream>
# include <string>
# include <fstream>
# include <map>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

// template <typename T, typename T2>
class BitcoinExchange
{
    public:
        BitcoinExchange(int argc);
        ~BitcoinExchange();
        void openCsvFile();
        void openInputFile(char *str);
        void printMessage();
        void run(char **argv);
        
        class CouldNotOpenFile: public std::exception{
            public:
                const char*what() const throw(){return ("Error: could not open file.");}
        };

        class NotPositiveNumber:public std::exception{
            public:
                const char*what() const throw(){return ("Error: not a positive number.");}
        };

        class BadInput:public std::exception{
            public:
                const char*what() const throw(){return ("Error: bad input => ");}
        };

        class TooLarge:public std::exception{
            public:
                const char*what() const throw(){return ("Error: too large a number.");}
        };
    private:
        BitcoinExchange();
        bool                                checkData(std::pair<std::string, std::string> p);
        bool                                checkDate(std::string line);
        void                                doCalculation(std::pair<std::string, std::string> p);
        std::pair<std::string, std::string> tokenize(std::string line, std::string del);
        std::map<std::string, std::string> _data;
        // T   price;
        // T2  amount;
};

#endif