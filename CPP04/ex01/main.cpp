/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 18:20:28 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/04 10:15:01 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

std::cout<<std::endl<<std::endl;
Animal *ani[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
for (int i; i<6;i++)
	delete ani[i];
return 0;
}
