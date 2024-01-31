/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   From.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:45 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/31 22:37:18 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_HPP
#define FROM_HPP
#include <iostream>

class FROM
{
		public:
			FROM(void);
			FROM(std::string const &name, bool const &sign, int grade1, int grade2);
			~FROM(void);
			FROM(const FROM &src);
			FROM &operator=(const FROM &src);

			std::string	getName(void);
			bool		getSigned(void);
			int			getGradeSign(void);
			int			getGradeExecute(void);
		private:
			std::string const	_name;
			bool				_signed;
			int const			_gradeSign;
			int const			_gradeExecute;
};

std::ostream operator<<(std::ostream o, FROM const &src);
#endif
