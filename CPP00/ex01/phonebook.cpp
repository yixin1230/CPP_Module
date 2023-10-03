/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 13:22:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/10/03 14:41:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getfirstName(void)
{
	return(firstName);
}
std::string	Contact::getlastName(void)
{
	return(lastName);
}

std::string	Contact::getnickName(void)
{
	return(nickName);
}

std::string	Contact::getphoneNumber(void)
{
	return(phoneNumber);
}

std::string	Contact::getdarkestSecret(void)
{
	return(darkestSecret);
}

void	Contact::setfirstName(void)
{
	std::getline(std::cin, firstName);
}

void	Contact::setlastName(void)
{
	std::getline(std::cin, lastName);
}

void	Contact::setnickName(void)
{
	std::getline(std::cin, nickName);
}

void	Contact::setphoneNumber(void)
{
	std::cin>>phoneNumber;
}

void	Contact::setdarkestSecret(void)
{
	std::cin>>darkestSecret;
}
