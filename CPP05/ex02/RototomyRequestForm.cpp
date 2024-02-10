/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RototomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:44:04 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 19:31:25 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Aform("RobotomyRequestForm", false, 72, 45),_target(target)
{
    std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
}