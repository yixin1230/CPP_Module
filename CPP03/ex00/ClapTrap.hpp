/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 19:46:23 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/29 10:18:09 by yizhang       ########   odam.nl         */
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
	
	ClapTrap();//Default constructor
	ClapTrap(ClapTrap &a);//Copy constructor
	ClapTrap(std::string name);
	~ClapTrap();

	//Copy assignment operator
	ClapTrap &operator=(ClapTrap const &a);
	
	private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_attackDamage;
};

#endif
