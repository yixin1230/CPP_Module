/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 20:38:45 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 10:22:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout<<"Harl is born"<<std::endl;
}

Harl::~Harl(void)
{
	std::cout<<"Harl is gone"<<std::endl;
}

void	Harl::debug(void)
{
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	int j = 0;
	std::string func[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*funcP[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4)
	{
		if (level == func[i])
		{
			j = 0;
			while (j < 4)
			{
				(this->*funcP[j])();
				if (j == i)
					break ;
				j++;
			}
		}
		i++;
	}
	std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
}
