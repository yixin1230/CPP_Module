/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:40:44 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 18:57:48 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFROM_HPP

#include "Aform.hpp"

class PresidentialPardonForm:public Aform
{
    public:
        PresidentialPardonForm(std::string target);
    private:
        std::string _target;
};
#endif