/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 18:44:22 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/21 19:58:40 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

Sed::Sed(std::string file_name, std::string s1, std::string s2)
{
	std::string replace = ".replace";
	this->file_name = file_name;
	this->s1 = s1;
	this->s2 = s2;
	this->re_file_name = file_name + replace;
}

Sed::~Sed()
{
	std::cout<<"Sed destructor executed"<<std::endl;
}

void Sed::open_file()
{
	this->file.open(this->file_name, std::ios::in);
	this->re_file.open(this->re_file_name, std::ios::out);
	if (!file.is_open() || !re_file.is_open())
	{
		std::cout<<"file can not open"<<std::endl;
		close_allfile();
		exit(1);
	}
}

void Sed::close_allfile()
{
	this->file.close();
	this->re_file.close();
}

void Sed::read_file()
{
	std::string tmp;
	std::string word;
	std::size_t index;
	while (getline(this->file, tmp))
	{
		index = tmp.find(s1);
		if (index != std::string::npos)
		{
			while (index != std::string::npos)
			{	
				tmp.erase(index, s1.length());
				tmp.insert(index, s2);
				index = tmp.find(s1);
			}
		}
		re_file<<tmp<<std::endl;
	}
}
