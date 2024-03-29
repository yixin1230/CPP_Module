/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/03 13:39:15 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap bob("Bob");
	ClapTrap jim("Jim");
	
	bob.takeDamage(99);
	bob.highFiveGuys();
	//jim.highFiveGuys();// Not works
	
	bob.attack("wall");
	bob.takeDamage(1);//dead
	//bob.guardGate();// Not works

	return 0;
}