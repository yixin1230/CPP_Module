/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:40:44 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 23:30:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFROM_HPP

#include "Aform.hpp"

class PresidentialPardonForm:public Aform
{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm &src);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

        void execute(const Bureaucrat &executor) const;
    private:
        PresidentialPardonForm();
        std::string _target;
};
#endif