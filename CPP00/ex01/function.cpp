/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   function.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:20 by yizhang       #+#    #+#                 */
/*   Updated: 2023/10/03 14:46:19 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setcontact(void)
{
	std::cout<<"Enter the firstname:";
	setfirstName();
	std::cout<<"Enter the lastname:";
	setlastName();
	std::cout<<"Enter the nickname:";
	setnickName();
	std::cout<<"Enter the phonenumber:";
	setphoneNumber();
	std::cout<<"Enter the darkestSecret:";
	setdarkestSecret();
	std::cout<<"\033[1;32mContact saved\033[0m"<<std::endl;
}

void	promp(void)
{
	std::cout<<"\033[1;33myou can enter here:\033[0m"<<std::endl;
	std::cout<<"\033[1;33mADD\033[0m: save a new contact"<<std::endl;
	std::cout<<"\033[1;33mSERCH\033[0m: display a specific contact"<<std::endl;
	std::cout<<"\033[1;33mEXIT\033[0m: exit the program"<<std::endl;
}

void	PhoneBook::displaybook(void)
{
	std::cout<<"|";
	displayten("Index");
	std::cout<<"|";
	displayten("FirstName");
	std::cout<<"|";
	displayten("LastName");
	std::cout<<"|";
	displayten("NickName");
	std::cout<<"|"<<std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout<<"|";
		for(int j = 0; j < 9; j++)
			std::cout<<' ';
		std::cout<<i;
		std::cout<<"|";
		displayten(contact[i].getfirstName());
		std::cout<<"|";
		displayten(contact[i].getlastName());
		std::cout<<"|";
		displayten(contact[i].getnickName());
		std::cout<<"|"<<std::endl;
	}
}

void	PhoneBook::setbook(void)
{
	contact[index].setcontact();
	if(index >= 7)
		index = 0;
	else
		index++;
	if (index < 8)
		size++;
}

void	PhoneBook::initbook(void)
{
	size = 0;
	index = 0;
}

void	displayten(std::string str)
{
	int i = 0;
	int len = str.length();
	if (len < 10)
	{
		while (i < 10 - len)
		{
			std::cout<<' ';
			i++;
		}
		i = 0;
		while (str[i])
		{
			std::cout<<str[i];
			i++;
		}
	}
	else if (len <= 10)
		std::cout<<str;
	else if (len > 10)
	{
		while(i < 9)
		{
			std::cout<<str[i];
			i++;
		}
		std::cout<<'.';
	}
}