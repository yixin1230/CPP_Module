/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 19:46:23 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 19:55:24 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
	private:
	std::string _name;
	int			_hitPoints;
	int			_EnergyPoints;
	int			_attackDamage;
};

#endif
