/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:06:56 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 15:23:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &a);
		~Dog();
		void makeSound()const;
		Dog &operator=(Dog const &a);
		Brain &getBrain(void);
		void setBrain(Brain const &a);
	private:
		Brain * _brain;
};
#endif