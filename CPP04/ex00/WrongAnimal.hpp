/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 21:43:31 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/05 14:15:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

#include <iostream>
class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &a);
		~WrongAnimal();
		void makeSound(void) const;
		std::string getType(void) const;
		WrongAnimal &operator=(WrongAnimal const &a);
	protected:
		std::string _type;
};
#endif