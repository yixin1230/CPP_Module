/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 17:35:55 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/10 23:40:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTform_HPP
#define ROBOTOMYREQUESTform_HPP

#include "Aform.hpp"
class RobotomyRequestForm:public Aform
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &src);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

        void execute(const Bureaucrat &executor) const;
    private:
        RobotomyRequestForm();
        std::string _target;
};

#endif