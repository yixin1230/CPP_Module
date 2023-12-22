/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 20:38:45 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/22 12:30:18 by yizhang       ########   odam.nl         */
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
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;

}

void	Harl::complain(std::string level)
{
	int	i = 0;
	std::string func[] = {"debug", "info", "warning", "error"};
	void(Harl::*funcP[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4)
	{
		if (level == func[i])
			(this->*funcP[i])();
		i++;
	}
}
