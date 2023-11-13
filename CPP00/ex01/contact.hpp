/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 10:03:54 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 12:16:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>


class Contact
{
	public:
		//getters
		int			getindex(void);
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
		//functions
		void	setcontact(int index);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;
};

#endif