/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/12 12:56:41 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
		public:
			Form(void);
			Form(std::string const &name, bool const &sign, int const gradeSign, int const gradeEx);
			~Form(void);
			Form(const Form &src);
			Form &operator=(const Form &src);

			std::string	getName(void)const;
			bool		getSigned(void)const;
			int			getGradeSign(void)const;
			int			getGradeExecute(void)const;

			void		beSigned(Bureaucrat &a);

			
			class	GradeTooLowException:public std::exception
			{
				public:
					const char*what() const throw(){return ("Grade too low");}
			};
			class	GradeTooHighException:public std::exception
			{
				public:
					const char*what() const throw(){return ("Grade too high");}
			};
			
		private:
			const std::string	_name;
			bool				_signed;
			int const			_gradeSign;
			int const			_gradeExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &src);
#endif
