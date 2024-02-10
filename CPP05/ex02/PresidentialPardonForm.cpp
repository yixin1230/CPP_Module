/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/10 18:32:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 19:28:14 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Aform("PresidentialPardonForm", false, 145, 137),_target(target)
{
    std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
}

