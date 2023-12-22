/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:53 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/22 23:33:22 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed &a);//copy constructor
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed	&operator=(Fixed const &a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int	_val;
		static const int _bits;
};

#endif
