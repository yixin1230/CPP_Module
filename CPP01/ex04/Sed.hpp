/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 18:44:43 by yizhang       #+#    #+#                 */
/*   Updated: 2023/12/27 17:10:11 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <fstream>
#include <iostream>

class Sed
{
	public:
		Sed(std::string file_name, std::string s1, std::string s2);
		~Sed();
		void	open_file();
		void	close_allfile();
		void	read_file();
		
	private:
		std::string		s1;
		std::string		s2;
		std::string		file_name;
		std::string		re_file_name;

		std::fstream	file;
		std::fstream	re_file;
};
#endif
