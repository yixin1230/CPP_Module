/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 13:22:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 13:32:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getfirstName(void)
{
	return(_firstName);
}
std::string	Contact::getlastName(void)
{
	return(_lastName);
}

std::string	Contact::getnickName(void)
{
	return(_nickName);
}

std::string	Contact::getphoneNumber(void)
{
	return(_phoneNumber);
}

std::string	Contact::getdarkestSecret(void)
{
	return(_darkestSecret);
}

Contact	PhoneBook::getcontact(int index)
{
	return (_contact[index]);
}

int	Contact::getindex(void)
{
	return (_index);
}

void	Contact::setfirstName(void)
{
	std::getline(std::cin, _firstName);
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
}

void	Contact::setlastName(void)
{
	std::getline(std::cin, _lastName);
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
}

void	Contact::setnickName(void)
{
	std::getline(std::cin, _nickName);
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
}

void	Contact::setphoneNumber(void)
{
	std::getline(std::cin, _phoneNumber);
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
}

void	Contact::setdarkestSecret(void)
{
	std::getline(std::cin, _darkestSecret);
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
}
