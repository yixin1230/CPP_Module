/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:31:57 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/08 10:55:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie z("zz");
	
	Zombie *z1 = newZombie("new");//didn't delete;
	z1->announce();
	delete z1;//deleted it.

	randomChump("ran");
    return 0;
}