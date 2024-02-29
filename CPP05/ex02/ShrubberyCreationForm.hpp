/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:32:30 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/29 14:39:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONform_HPP
#define SHRUBBERYCREATIONform_HPP

#include "Aform.hpp"
#include <fstream>
class ShrubberyCreationForm:public Aform
{
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &src);
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

        void execute(const Bureaucrat &executor) const;
    private:
        ShrubberyCreationForm();
        std::string _target;
};
#endif
