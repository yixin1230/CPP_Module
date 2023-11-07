/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 09:57:10 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/07 16:28:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		//functions
		void	setcontact(void);
		//getters
		std::string	getfirstName(void);
		std::string	getlastName(void);
		std::string	getnickName(void);
		std::string	getphoneNumber(void);
		std::string	getdarkestSecret(void);
		//setter
		void	setfirstName(void);
		void	setlastName(void);
		void	setnickName(void);
		void	setphoneNumber(void);
		void	setdarkestSecret(void);
};

class PhoneBook
{
	private:
		Contact	contact[8];
		int		size;
		int		index;
	public:
		Contact	getcontact(int index);
		void	displaybook(void);
		void	setbook(void);
		void	initbook(void);
		void	serch(std::string name);
};

void	promp(void);
void	displayten(std::string str);

#endif
