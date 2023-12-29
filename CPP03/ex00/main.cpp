/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 10:44:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    //test constructor && destructor
    ClapTrap a;//default constructor
    ClapTrap b(a);
    ClapTrap c("LOL");
    ClapTrap d;
    d = c;
    return 0;
}