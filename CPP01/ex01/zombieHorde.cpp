/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:06:00 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/13 17:24:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*Z_arr[N];
	
	for(int i = 0; i < N; i++)
	{
		Z_arr[i].Zombie(name);
	}
	return (Z_arr);
}
