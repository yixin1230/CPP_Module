/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:53 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 12:42:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		
		Fixed	&operator=(Fixed const &a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void)const;
		int		toInt(void)const;
	private:
		int	_val;
		static const int _bits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &fix);

#endif
