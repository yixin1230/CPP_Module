/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 20:19:43 by yizhang       #+#    #+#                 */
/*   Updated: 2024/09/02 15:25:53 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	//calculate the value: price * amount
	//output the results: the program prints out the calcuted value for each line in the input file
	try{
		BitcoinExchange btc(argc);
		btc.run(argv);
	}
	catch (BitcoinExchange::CouldNotOpenFile &e)
	{
		std::cout<<e.what()<<std::endl;
	}
    return 0;
}