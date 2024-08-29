/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/29 19:58:10 by yizhang       #+#    #+#                 */
/*   Updated: 2024/08/29 21:08:46 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <stdexcept>
# include <iostream>
# include <fstream>

// template <typename T, typename T2>
class BitcoinExchange
{
    public:
        BitcoinExchange(int argc, char **argv);
        ~BitcoinExchange();
        void run();
        
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
        // T   price;
        // T2  amount;
};

#endif