/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 17:45:53 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 17:44:25 by yizhang       ########   odam.nl         */
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
		
		//6 comparison operators:
		bool	operator>(Fixed const &a) const;
		bool	operator<(Fixed const &a) const;
		bool	operator>=(Fixed const &a) const;
		bool	operator<=(Fixed const &a) const;
		bool	operator==(Fixed const &a) const;
		bool	operator!=(Fixed const &a) const;
		
		//4 arthmetic operators:
		//the first parameter is implicitly the calling object , so only need one function
		Fixed	operator+(Fixed const &a) const;
		Fixed	operator-(Fixed const &a) const;
		Fixed	operator*(Fixed const &a) const;
		Fixed	operator/(Fixed const &a) const;
		
		//4 increment/decrement operators
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		//four public overloaded member functions:
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

		Fixed	&operator=(Fixed const &a);
		//Getter && Setter
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		//Convert function
		float	toFloat(void)const;
		int		toInt(void)const;
	private:
		int	_val;
		static const int _bits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &fix);

#endif
