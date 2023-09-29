/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/29 11:33:25 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string		cmd;
	//PhoneBook		book;

	std::cout<<"Welcome to the phonebook! :)"<<std::endl;
	while (1)
	{
		std::cin>>cmd;
		if (cmd == "ADD")
		{
			std::cout<<"this is add"<<std::endl;
		}
		else if (cmd == "SERCH")
		{
			std::cout<<"this is serch"<<std::endl;
		}
		else if (cmd == "EXIT")
			break ;
		else
		{
			std::cout<<"\n\033[1;44myou can enter here: 'ADD','SERCH','EXIT'\033[0m\n"<<std::endl;
			std::cout<<"ADD: save a new contact"<<std::endl;
			std::cout<<"SERCH: display a specific contact"<<std::endl;
			std::cout<<"EXIT: exit the program"<<std::endl;
		}
	}
	std::cout<<"The program quits and the contacts last forever!"<<std::endl;
	return(0);
}