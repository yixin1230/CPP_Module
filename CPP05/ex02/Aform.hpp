/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aform.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/06 10:15:42 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Aform_HPP
#define Aform_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Aform
{
		public:
			Aform(std::string const &name, bool const &sign, int const gradeSign, int const gradeEx);
			virtual ~Aform(void);
			Aform(const Aform &src);
			Aform 				&operator=(const Aform &src);

			std::string			getName(void)const;
			bool				getSigned(void)const;
			int					getGradeSign(void)const;
			int					getGradeExecute(void)const;

			void				beSigned(Bureaucrat const &a);
			virtual void		execute(Bureaucrat const &executor)const = 0;

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
			class	NotSignedException:public std::exception
			{
				public:
					const char*what()const throw(){return ("Form not signed");}
			};
		private:
			Aform(void);
			const std::string	_name;
			bool				_signed;
			int const			_gradeSign;
			int const			_gradeExecute;
};

std::ostream &operator<<(std::ostream &o, Aform const &src);
#endif
