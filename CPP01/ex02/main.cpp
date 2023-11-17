/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 10:49:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 14:42:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain;
	std::string *stringPTR;
	std::string &stringREF;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	stringREF = brain;

	std::cout<<&brain<<std::endl;
	return 0;
}