/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yixinzhang <yixinzhang@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 15:57:23 by yixinzhang    #+#    #+#                 */
/*   Updated: 2023/12/20 17:05:13 by yixinzhang    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include ""
#include <fstream> 
#include <iostream>

int	main()
{
	//open a file 
	//read all file,
	//and copy all the content to new file
	//if in side the new file have s1, replace it to s2
	std::fstream file;
	std::string s1;
	std::string s2;
	
	
	file.open("Makefile",std::ios::in);
	//out mode for write only
	//app for append
	//in for read mode
	
	if (file.is_open()){
		std::cout<<"file is open"<<std::endl;
		file<<"I wrote something"<<std::endl;
	}
	else
	{
		std::cout<<"dobn't have file"<<std::endl;
	}
	//name of the file to be open, which mode
	//out is the write mode.
	file.close();
	return 0;
}