/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 11:08:38 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string		cmd;
	PhoneBook		book;

	std::cout<<"\033[1;42mWelcome to the phonebook! :)\033[0m"<<std::endl;
	promp();
	book.initbook();
	while (1)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.setbook();
		else if (cmd == "SEARCH")
		{
			book.search();
			promp();
		}
		else if (cmd == "EXIT")
			break ;
		else
			promp();
	}
	std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
	return(0);
}