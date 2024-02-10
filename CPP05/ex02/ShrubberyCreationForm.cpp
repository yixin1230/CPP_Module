/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:45:14 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 19:33:32 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Aform("ShrubberyCreationForm", false, 25, 5),_target(target)
{
    std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
}