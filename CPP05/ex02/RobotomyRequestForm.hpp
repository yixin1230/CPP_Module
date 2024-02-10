/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:35:55 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 18:59:24 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTform_HPP
#define ROBOTOMYREQUESTform_HPP

#include "Aform.hpp"
class RobotomyRequestForm:public Aform
{
    public:
        RobotomyRequestForm(std::string target);
    private:
        std::string _target;
};

#endif