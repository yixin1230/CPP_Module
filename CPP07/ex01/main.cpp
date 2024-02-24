/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 14:13:25 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 15:42:17 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    //int
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = 8;
    }
    iter(array, 10, printIt<int>);
    std::cout<<std::endl;

    //double
    double arr[5] = {3.14,356.0,7.5,576.7,3.999};
    iter(arr, 5, printIt<double>);
    std::cout<<std::endl;


    //string
    std::string sArr[5] = {"hello","lol","something"};
    iter(sArr, 3, printIt<std::string>);
    return 0;
}