/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 13:48:39 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/15 23:21:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Aform.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Aform;
class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();

        Intern &operator=(Intern const &src);
        
        Aform *makeForm(std::string name, std::string target);
        Aform *makePresidentialPardonForm(std::string target);
        Aform *makeRobotomyRequestForm(std::string target);
        Aform *makeShrubberyCreationForm(std::string target);
        
        class   InternExeception: public std::exception
        {
            public:
               virtual const char*what() const throw();
        };
};
#endif