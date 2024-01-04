/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 15:50:13 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	// Test in subject
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	//Test array of animals
	std::cout<<std::endl<<std::endl;
	Animal *ani[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};

	ani[0]->getBrain().setIdeas("lol",0);
	Animal *tmp = ani[3];
	ani[3] = ani[2];
	for (int i; i < 7; i++)
	{
		
		delete ani[i];
	}
	std::cout<<std::endl<<std::endl;
	delete tmp;
	return 0;
}
