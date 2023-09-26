/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 09:57:10 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/26 14:54:02 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>

using std::string;

class PhoneBook
{
	private:
		Contact	contact[8];
	public:
		
};

class Contact
{
	private:
		string	firstName;
		string	lastName;
		string	nickName;
		string	phoneNumber;
		string	darkestSecret;
	public:
		void	setfirstName(string name);
		string	getfirstName();
};

#endif
