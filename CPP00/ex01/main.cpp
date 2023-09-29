/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 10:02:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/29 14:19:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string		cmd;
	//PhoneBook		book;
	Contact			contact;

	std::cout<<"\033[1;45mWelcome to the phonebook! :)\033[0m"<<std::endl;
	std::cout<<"\033[1;45myou can enter here: 'ADD','SERCH','EXIT'\033[0m"<<std::endl;
	std::cout<<"ADD: save a new contact"<<std::endl;
	std::cout<<"SERCH: display a specific contact"<<std::endl;
	std::cout<<"EXIT: exit the program"<<std::endl;
	while (1)
	{
		std::cin>>cmd;
		if (cmd == "ADD")
		{
			contact.setcontact(contact);
		}
		else if (cmd == "SERCH")
		{
			contact.display(contact);
		}
		else if (cmd == "EXIT")
			break ;
		else
		{
			std::cout<<"\n\033[1;43myou can enter here: 'ADD','SERCH','EXIT'\033[0m\n"<<std::endl;
			std::cout<<"ADD: save a new contact"<<std::endl;
			std::cout<<"SERCH: display a specific contact"<<std::endl;
			std::cout<<"EXIT: exit the program"<<std::endl;
		}
	}
	std::cout<<"The program quits and the contacts last forever!"<<std::endl;
	return(0);
}