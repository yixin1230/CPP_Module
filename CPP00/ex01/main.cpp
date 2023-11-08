/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/08 12:35:28 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string		cmd;
	std::string		name;
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
			std::cout<<"\033[1;33myou can enter here your contact first name:\033[0m"<<std::endl;
			std::getline(std::cin, name);				
			book.search(name);
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