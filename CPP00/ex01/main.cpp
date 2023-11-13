/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 13:32:37 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
			book.search();
		else if (cmd == "EXIT")
			break ;
		else if(std::cin.eof())
			std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		else
			promp();
	}
	std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
	return(0);
}