/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 13:22:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/29 10:11:58 by yizhang       ########   odam.nl         */
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

void	Contact::setfirstName(std::string name)
{
	firstName = name;
}

void	Contact::setlastName(std::string name)
{
	lastName = name;
}

void	Contact::setnickName(std::string name)
{
	nickName = name;
}

void	Contact::setphoneNumber(int number)
{
	phoneNumber = number;
}

void	Contact::setdarkestSecret(std::string secret)
{
	darkestSecret = secret;
}
