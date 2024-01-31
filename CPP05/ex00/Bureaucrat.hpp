/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:15:18 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/31 09:22:08 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &a);
		std::string	getName(void) const;
		int	getGrade(void) const;

		void increment(void);
		void decrement(void);
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