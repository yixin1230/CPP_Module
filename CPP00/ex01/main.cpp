/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/10/03 11:28:17 by yizhang       ########   odam.nl         */
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
		std::cin>>cmd;
		if (cmd == "ADD")
			book.setbook();
		else if (cmd == "SERCH")
			book.displaybook();
		else if (cmd == "EXIT")
			break ;
		else
			promp();
	}
	std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
	return(0);
}