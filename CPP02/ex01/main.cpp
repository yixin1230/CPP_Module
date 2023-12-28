/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/22 23:24:54 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/27 20:50:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//what is float point number
//how to convert

int main(void)
{
	//Fixed a;
	Fixed const b( 10 );
	// Fixed const c( 42.42f );
	//Fixed const d( b );
	// a = Fixed( 1234.4321f );
	//std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	//  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}