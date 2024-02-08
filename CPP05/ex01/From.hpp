/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   From.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/08 09:30:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_HPP
#define FROM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class From
{
		public:
			From(void);
			From(std::string const &name, bool const &sign, int const gradeSign, int const gradeEx);
			~From(void);
			From(const From &src);
			From &operator=(const From &src);

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

std::ostream operator<<(std::ostream o, From const &src);
#endif
