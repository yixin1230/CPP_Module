/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/27 20:17:16 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/28 18:17:37 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

//other test
/* int main( void )
{
	Fixed a(8);
	Fixed b(8);
	Fixed const c(4);
	Fixed const d(5);

	//test + - * /
	std::cout<< a + b << std::endl; 
	std::cout<< a - b << std::endl; 
	std::cout<< a * b << std::endl; 
	std::cout<< a / b << std::endl; 
	std::cout<<std::endl;

	//test max min
	std::cout<< Fixed::max(a, b) << std::endl;
	std::cout<< Fixed::min(a, b) << std::endl;
	std::cout<<std::endl;

	//test max min with const
	std::cout<< Fixed::max(c, d) << std::endl;
	std::cout<< Fixed::min(c, d) << std::endl;
	std::cout<<std::endl;
	
	//test comparison operator
	if (a > b)
		std::cout<< "a > b" << std::endl;
	if (a < b)
		std::cout<< "a < b" << std::endl;
	if (a <= b)
		std::cout<< "a <= b" << std::endl;
	if (a >= b)
		std::cout<< "a >= b" << std::endl;
	if (a == b)
		std::cout<< "a == b" << std::endl;
	if (a != b)
		std::cout<< "a != b" << std::endl;
	std::cout<<std::endl;

	//test increment/decrement operators
	std::cout<< a << std::endl; 
	std::cout<< ++a << std::endl; 
	std::cout<< a << std::endl; 
	std::cout<<std::endl;
	std::cout<< a << std::endl; 
	std::cout<< a++ << std::endl; 
	std::cout<< a << std::endl;
	return 0;
} */