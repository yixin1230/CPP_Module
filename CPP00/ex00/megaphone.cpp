/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 15:12:26 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/08 12:34:19 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	if (argc <= 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (1);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout<<(char)(std::toupper(argv[i][j]));
				j++;
			}
			i++;
		}
		std::cout<<std::endl;
	}
	return (0);
}