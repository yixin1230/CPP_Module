/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 13:22:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/26 14:48:23 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setfirstName(std::string name)
{
	firstName = name;
}

std::string	Contact::getfirstName()
{
	return(firstName);
}