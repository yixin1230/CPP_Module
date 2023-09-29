/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   function.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:20 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/29 14:13:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setcontact(Contact contact)
{
	std::string input;
	std::cout<<"Enter the firstname:"<<std::endl;
	std::cin>>input;
	contact.setfirstName(input);
	std::cout<<"Enter the lastname:"<<std::endl;
	std::cin>>input;
	contact.setlastName(input);
	std::cout<<"Enter the nickname:"<<std::endl;
	std::cin>>input;
	contact.setnickName(input);
	std::cout<<"Enter the phonenumber:"<<std::endl;
	std::cin>>input;
	contact.setphoneNumber(input);
	std::cout<<"Enter the darkestSecret:"<<std::endl;
	std::cin>>input;
	contact.setdarkestSecret(input);
	std::cout<<"Contact saved"<<std::endl;
}

void	Contact::display(Contact contact)
{
	std::cout<<"firstname: "<<contact.getfirstName()<<std::endl;
	std::cout<<"lastname: "<<contact.getlastName()<<std::endl;
	std::cout<<"nickname: "<<contact.getnickName()<<std::endl;
	std::cout<<"phoneNumber: "<<contact.getphoneNumber()<<std::endl;
	std::cout<<"darkestSecret: "<<contact.getdarkestSecret()<<std::endl;
}