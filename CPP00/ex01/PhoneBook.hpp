/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 09:57:10 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 13:32:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <stdlib.h>

class PhoneBook
{
	public:
		Contact	getcontact(int index);
		void	displaybook(void);
		void	setbook(void);
		void	initbook(void);
		void	search(void);
	private:
		Contact	_contact[8];
		int		_size;
		int		_index;
};

void	promp(void);
void	displayten(std::string str);
int		stoeight(std::string str);

#endif
