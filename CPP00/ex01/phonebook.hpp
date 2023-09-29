/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 09:57:10 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/29 14:13:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		void	display(Contact contact);
		void	setcontact(Contact contact);
		//functions
		std::string	getfirstName(void);
		std::string	getlastName(void);
		std::string	getnickName(void);
		std::string	getphoneNumber(void);
		std::string	getdarkestSecret(void);
		//setters
		void	setfirstName(std::string name);
		void	setlastName(std::string name);
		void	setnickName(std::string name);
		void	setphoneNumber(std::string number);
		void	setdarkestSecret(std::string secret);
};

/* class PhoneBook
{
	private:
		Contact	contact[8];
		int		size;
		int		index;
	public:
		Contact	display(void);
		void	setcontact(Contact contact);
		
}; */

#endif
