/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yixinzhang <yixinzhang@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 23:05:28 by yixinzhang    #+#    #+#                 */
/*   Updated: 2023/12/20 23:47:34 by yixinzhang    ########   odam.nl         */
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
