/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:15:18 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 15:45:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Aform.hpp"

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

class Aform;
class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &a);
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		increment(void);
		void		decrement(void);

		void		signform(Aform &form);
		void		executeForm(Aform const &form);
		
		class GradeTooHighException:public std::exception
		{
			public:
				const char*what() const throw(){return ("Grade too high");}
		};
		
		class GradeTooLowException:public std::exception
		{
			public:
				const char*what() const throw(){return ("Grade too low");};
		};
	private:
		std::string const	_name;
		int					_grade;
};
	std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

# endif