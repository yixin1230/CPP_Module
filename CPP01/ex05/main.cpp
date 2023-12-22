/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 20:03:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/22 12:34:15 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//function pointer:
//be able to pass a function as an argument or as a parameter to another function.

int	main()
{
	Harl		karen;
	std::string	level;
	
	while (1)
	{
		std::cout<<"Enter a level (debug, info, warning, error, exit):";
		std::cin>>level;
		if (level == "exit")
			return 0;
		karen.complain(level);
	}
	return 0;
}