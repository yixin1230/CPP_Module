/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   From.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 09:41:34 by yizhang       #+#    #+#                 */
/*   Updated: 2024/01/31 22:42:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FROM.hpp"

FROM::FROM(std::string const &name, bool const &sign, int grade1, int grade2):_name(name),_signed(sign),_gradeSign(grade1),_gradeExecute(grade2)
{
    std::cout<<"constructor called"<<std::endl;
}

FROM::FROM(void):_name("name"),_signed(false),_gradeSign(0),_gradeExecute(0)
{
    std::cout<<"constructor called"<<std::endl;
}

FROM::~FROM(void)
{
    std::cout<<"descructor called"<<std::endl;
}

FROM::FROM(const FROM &src)
{
   this->_name = src.getName();
    
}

FROM &FROM::operator=(const FROM &src)
{

}

std::string	FROM::getName(void)
{
    return (_name);
}

bool		FROM::getSigned(void)
{
    return (_signed);
}

int			FROM::getGradeSign(void)
{
    return (_gradeSign);
}

int			FROM::getGradeExecute(void)
{
    return (_gradeExecute);
}

std::ostream operator<<(std::ostream o, FROM const &src)
{
    o<<""
}
