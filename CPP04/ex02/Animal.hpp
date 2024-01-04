/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:00:04 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 18:14:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAG "\033[1;35m"

class Animal
{
	public:
		Animal();
		Animal(Animal const &a);
		
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		void hi(void);
		virtual Animal &operator=(Animal const &a);
		virtual Brain &getBrain(void) = 0;
	protected:
		std::string _type;
};

#endif