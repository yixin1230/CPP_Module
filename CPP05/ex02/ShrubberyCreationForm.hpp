/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:32:30 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 19:01:53 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONform_HPP
#define SHRUBBERYCREATIONform_HPP

#include "Aform.hpp"
class ShrubberyCreationForm:public Aform
{
    public:
        ShrubberyCreationForm(std::string target);
    private:
        std::string _target;
};
#endif
