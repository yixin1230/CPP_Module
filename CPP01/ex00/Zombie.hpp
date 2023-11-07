/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:31:50 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/07 18:01:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:
		void	announce(void);
		
		//Getter
		std::string	getname(void);

		//Constructor && Destructor
		Zombie(std::string name);
		~Zombie(void);
	
	private:
		std::string	_name;
};
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);

#endif