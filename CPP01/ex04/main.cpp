/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 18:43:58 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/21 18:44:09 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//sed command in unix stands for stream editor 
//and it can perform lots of function on file 
//like searching, find and replace insertion deletion

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<<"this program should have three parameters"<<std::endl;
		return 1;
	}
	Sed replace(argv[1], argv[2], argv[3]);
	replace.open_file();
	replace.read_file();
	replace.close_allfile();
	
	return 0;
}