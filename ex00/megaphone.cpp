/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 15:12:26 by yizhang       #+#    #+#                 */
/*   Updated: 2023/09/21 16:46:06 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			int	len = argv[i].length();
			for (int j = 0; j < len; j++)
			{
				if (islower(argv[i][j]))
					argv[i][j] = toupper(argv[i][j]);
			}
			std::cout<<argv[i]<<" ";
		}
		std::cout<<"\n";
	}
	return (0);
}