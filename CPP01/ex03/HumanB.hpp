/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:08:26 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 17:41:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB();
	private:
		std::string	_name;
		Weapon	*_Weapon;
};
#endif