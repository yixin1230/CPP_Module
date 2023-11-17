/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:08:29 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 17:51:23 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		void	attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		std::string	_name;
		Weapon	*_Weapon;
};

#endif