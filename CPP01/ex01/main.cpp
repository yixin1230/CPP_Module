/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 11:01:28 by yizhang       #+#    #+#                 */
/*   Updated: 2023/11/17 10:47:50 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *arr;
    int N;
    N = 8;
    arr = zombieHorde(N,"Yixin");
    for (int i = 0; i < N; i++)
    {
        arr[i].announce();
    }
    delete []arr;
    return 0;
}