/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yixinzhang <yixinzhang@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 23:05:23 by yixinzhang    #+#    #+#                 */
/*   Updated: 2023/12/21 00:13:29 by yixinzhang    ########   odam.nl         */
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
	this->re_file.open(this->re_file_name, std::ios::app);
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
	std::size_t	i = 0;
	while (getline(this->file, tmp))
	{
		index = tmp.find(s1);
		if (index == std::string::npos)
			re_file<<tmp<<std::endl;
		else
		{
			while (tmp[i])//don't know how to replace the words
			{
				re_file<<tmp[i];
				if (i == index)
				{
					re_file<<s2;
					i = i + s1.length() - 1;
				}
				i++;
			}
		}
	}
}
