/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yixinzhang <yixinzhang@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 15:57:23 by yixinzhang    #+#    #+#                 */
/*   Updated: 2023/12/20 23:45:12 by yixinzhang    ########   odam.nl         */
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