/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/02 16:08:39 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 15:39:49 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &a);
		~Cat();
		void makeSound(void)const;
		Cat &operator=(Cat const &a);
		Brain &getBrain(void);
		void setBrain(Brain const &a);
		
	private:
		Brain * _brain;
};
#endif