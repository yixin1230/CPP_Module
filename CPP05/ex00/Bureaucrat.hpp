/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:15:18 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/18 13:59:12 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &a);
        std::string	getName(void);
		int	getGrade(void);
    private:
    	std::string const	_name;
    	int					_grade;
};

# endif