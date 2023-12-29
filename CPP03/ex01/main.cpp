/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 17:34:19 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("Bob");// will call the default ClapTrap constructor
    ScavTrap c(a);
		//test the copy operator works the same as ClapTrap
		a = b;
		
		//test other function works the same as ClapTrap
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");//should dead here
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");
		a.attack("tree");
		a.attack("wall");
		a.attack("rock");
		a.attack("door");

		//test the guardgate works
		a.guardGate();
		c.attack("gate");
    return 0;
}