/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   function.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 11:00:20 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 13:32:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::setcontact(int index)
{
	_index = index;
	std::cout<<"Enter the firstname:";
	setfirstName();
	std::cout<<"Enter the lastname:";
	setlastName();
	std::cout<<"Enter the nickname:";
	setnickName();
	std::cout<<"Enter the phonenumber:";
	setphoneNumber();
	std::cout<<"Enter the darkestSecret:";
	setdarkestSecret();
	std::cout<<"\033[1;32mContact saved\033[0m"<<std::endl;
}

void	PhoneBook::search(void)
{
	std::string				input;
	int						index;
	
	PhoneBook::displaybook();
	std::cout<<"\033[1;33myou can enter here your contact index:\033[0m"<<std::endl;
	std::cin>>input;
	if(std::cin.eof())
	{
		std::cout<<"\033[1;31mThe program quits and the contacts last forever!\033[0m"<<std::endl;
		exit (0);
	}
	index = stoeight(input);
	if (index < _size)
	{
		Contact	show = getcontact(index);
		std::cout<<"Index:"<<show.getindex()<<std::endl;
		std::cout<<"First name:"<<show.getfirstName()<<std::endl;
		std::cout<<"Last name:"<<show.getlastName()<<std::endl;
		std::cout<<"Nick name:"<<show.getnickName()<<std::endl;
		std::cout<<"Phone number:"<<show.getphoneNumber()<<std::endl;
		std::cout<<"Darkest secret:"<<show.getdarkestSecret()<<std::endl;
	}
	else
		std::cout<<"\033[1;31mNo contact found\033[0m"<<std::endl;
}

void	promp(void)
{
	std::cout<<"\033[1;33myou can enter here:\033[0m"<<std::endl;
	std::cout<<"\033[1;33mADD\033[0m: save a new contact"<<std::endl;
	std::cout<<"\033[1;33mSEARCH\033[0m: display a specific contact"<<std::endl;
	std::cout<<"\033[1;33mEXIT\033[0m: exit the program"<<std::endl;
}

void	PhoneBook::displaybook(void)
{
	std::cout<<"|";
	displayten("Index");
	std::cout<<"|";
	displayten("FirstName");
	std::cout<<"|";
	displayten("LastName");
	std::cout<<"|";
	displayten("NickName");
	std::cout<<"|"<<std::endl;
	for (int i = 0; i < _size; i++)
	{
		std::cout<<"|";
		for(int j = 0; j < 9; j++)
			std::cout<<' ';
		std::cout<<i;
		std::cout<<"|";
		displayten(_contact[i].getfirstName());
		std::cout<<"|";
		displayten(_contact[i].getlastName());
		std::cout<<"|";
		displayten(_contact[i].getnickName());
		std::cout<<"|"<<std::endl;
	}
}

void	PhoneBook::setbook(void)
{
	if (_size < 8)
		_size++;
	if (this->_index > 7)
		this->_index = 0;
	_contact[this->_index].setcontact(_index);
	this->_index += 1;
}

void	PhoneBook::initbook(void)
{
	this->_size = 0;
	this->_index = 0;
}

void	displayten(std::string str)
{
	int i = 0;
	int len = str.length();
	if (len < 10)
	{
		while (i < 10 - len)
		{
			std::cout<<' ';
			i++;
		}
		i = 0;
		while (str[i])
		{
			std::cout<<str[i];
			i++;
		}
	}
	else if (len <= 10)
		std::cout<<str;
	else if (len > 10)
	{
		while(i < 9)
		{
			std::cout<<str[i];
			i++;
		}
		std::cout<<'.';
	}
}

int	stoeight(std::string str)
{
	int	i;
	i = 100;
	if (str[1] != '\0' || str[0] < 48 || str[0] > 56)
		return i;
	else
		i = (str[0] - '\0') - 48;
	return i;
}
