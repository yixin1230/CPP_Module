/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:06:00 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 10:37:46 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*z_arr;
	
	z_arr = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		z_arr[i].setname(name);
	}
	return (z_arr);
}
