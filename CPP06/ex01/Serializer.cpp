/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 16:44:04 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/22 18:53:38 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}

Serializer::Serializer(const Serializer &src)
{
    (void)src;
}

Serializer::~Serializer()
{
    
}

Serializer &Serializer::operator=(const Serializer &src)
{
    (void)src;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
 {
    return (reinterpret_cast<uintptr_t>(ptr));
 }
 
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}