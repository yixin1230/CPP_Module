/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 12:35:19 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/22 12:47:31 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout<<"Enter here parameter one of the four levels"<<std::endl;
		return 1;
	}
	Harl karen;
	karen.complain(argv[1]);
	return 0;
}