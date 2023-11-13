/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 13:22:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 11:06:58 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
}

void	Contact::setlastName(void)
{
	std::getline(std::cin, _lastName);
}

void	Contact::setnickName(void)
{
	std::getline(std::cin, _nickName);
}

void	Contact::setphoneNumber(void)
{
	std::getline(std::cin, _phoneNumber);
}

void	Contact::setdarkestSecret(void)
{
	std::getline(std::cin, _darkestSecret);
}
