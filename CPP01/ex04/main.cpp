/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yixinzhang <yixinzhang@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 15:57:23 by yixinzhang    #+#    #+#                 */
/*   Updated: 2023/12/20 22:51:40 by yixinzhang    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include ""
#include <fstream> 
#include <iostream>


int	main(int argc, char **argv)
{
	//open a file 
	//read all file,
	//and copy all the content to new file
	//if in side the new file have s1, replace it to s2
	//out mode for write only
	//app for append
	//in for read mode
	
	std::fstream file;
	std::fstream re_file;
	std::string replace;
	std::string file_name;
	std::string s1;
	std::string s2;
	
	if (argc != 4)
	{
		std::cout<<"this program should have three parameters"<<std::endl;
		return 1;
	}
	replace = ".replace";
	file_name = argv[1] + replace;
	file.open(argv[1],std::ios::in);
	if (file.is_open()){
		re_file.open(file_name,std::ios::app);
		while (getline(file,s1))
		{
			re_file<<s1<<std::endl;
		}
	}
	else
	{
		std::cout<<"don't have file"<<std::endl;
		re_file.close();
		file.close();
		return 2;
	}
	re_file.close();
	file.close();
	return 0;
}