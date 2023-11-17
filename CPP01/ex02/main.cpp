/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 10:49:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 14:58:51 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain;
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	brain = "HI THIS IS BRAIN";

	std::cout<<"address of string: "<<&brain<<std::endl;
	std::cout<<"address of PTR:    "<<&stringPTR<<std::endl;
	std::cout<<"address of REF:    "<<&stringREF<<std::endl;

	std::cout<<"value of string: "<<brain<<std::endl;
	std::cout<<"value of PTR:    "<<stringPTR<<std::endl;
	std::cout<<"value of REF:    "<<stringREF<<std::endl;
	
	return 0;
}