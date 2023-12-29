/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 14:01:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    //test constructor && destructor
    ClapTrap jim("Jim");//default constructor
    ClapTrap lol(jim);
    ClapTrap bob("Bob");
    ClapTrap d;
    d = bob;

    bob.attack("Tree");
    bob.beRepaired(3);
    bob.takeDamage(2);
    bob.takeDamage(3);
    bob.takeDamage(2);
    bob.takeDamage(7);//should dead here, lost all hit point

    d.takeDamage(0);//d should live
    d.takeDamage(10);//d shoud dead, but with name bob
    
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);
    jim.beRepaired(1);//should dead here
    jim.takeDamage(0);//can not do anything after dead

    return 0;
}