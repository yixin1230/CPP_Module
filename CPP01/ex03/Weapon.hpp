/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:03:58 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 17:03:01 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		std::string	getType(void);
		void	setType(std::string type);
		Weapon(std::string type);
		Weapon();
		~Weapon();
	private:
		std::string	_type;
};

#endif