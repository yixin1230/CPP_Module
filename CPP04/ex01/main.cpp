/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/05 14:18:44 by yizhang       ########   odam.nl         */
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
	

	//Test Brain
	ani[0]->getBrain().setIdeas("lol",0);
	ani[0]->getBrain().setIdeas("Feed me",1);
	ani[1]->getBrain().setIdeas("Food!",0);
	ani[1]->getBrain().setIdeas("Ball!",1);
	
	std::cout<<ani[0]->getBrain().getIdeas(0)<<std::endl;
	std::cout<<ani[0]->getBrain().getIdeas(1)<<std::endl;
	std::cout<<ani[1]->getBrain().getIdeas(0)<<std::endl;
	std::cout<<ani[1]->getBrain().getIdeas(1)<<std::endl; 
	std::cout<<std::endl<<std::endl;
	

	//Deep copy
	Dog origin;
	Dog deep = origin;
	std::cout<<"deep: "<<std::endl;
	deep.getBrain().setIdeas("Food!",0);
	deep.getBrain().setIdeas("Ball!",1);
	std::cout<<deep.getBrain().getIdeas(0)<<std::endl;
	std::cout<<deep.getBrain().getIdeas(1)<<std::endl;
	std::cout<<std::endl<<std::endl;
	
	std::cout<<"origin: "<<std::endl;
	std::cout<<origin.getBrain().getIdeas(0)<<std::endl;
	std::cout<<origin.getBrain().getIdeas(1)<<std::endl;
	std::cout<<std::endl<<std::endl;

	
	for (int i = 0; i < 6; i++)
		delete ani[i];
	std::cout<<std::endl<<std::endl;
	return 0;
}
