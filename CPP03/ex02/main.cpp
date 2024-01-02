/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/02 15:54:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap bob("Bob");
	ClapTrap jim("Jim");
	
	bob.takeDamage(99);
	bob.highFiveGuys();
	bob.attack("wall");
	bob.takeDamage(1);//dead

	return 0;
}