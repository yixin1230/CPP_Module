/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:15:18 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/26 09:14:47 by yizhang       ########   odam.nl         */
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

		void increment(int grade);
		void decrement(int grade);
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

# endif