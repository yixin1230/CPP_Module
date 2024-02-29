/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 16:29:29 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/29 18:03:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack();
        MutantStack(T value);
        MutantStack(MutantStack const &src);
        MutantStack &operator=(MutantStack const &src);
        ~MutantStack();