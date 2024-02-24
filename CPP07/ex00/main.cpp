/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 16:26:02 by yizhang       #+#    #+#                 */
/*   Updated: 2024/02/24 01:26:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

// int main()
// {
//     //int
//     int a = 9;
//     int b = 4;
//     std::cout<<"a: "<<a<<std::endl;
//     std::cout<<"b: "<<b<<std::endl;
//     swap(a,b);
//     std::cout<<"a: "<<a<<std::endl;
//     std::cout<<"b: "<<b<<std::endl;
//     std::cout<<"MIN: "<<min(a,b)<<std::endl;
//     std::cout<<"MAX: "<<min(a,b)<<std::endl;

//     std::cout<<std::endl;

//     //float
//     float c = 9.13413413;
//     float d = 4.0;
//     std::cout<<"c: "<<c<<std::endl;
//     std::cout<<"d: "<<d<<std::endl;
//     swap(c,d);
//     std::cout<<"c: "<<c<<std::endl;
//     std::cout<<"d: "<<d<<std::endl;
//     std::cout<<"MIN: "<<min(c,d)<<std::endl;
//     std::cout<<"MAX: "<<max(c,d)<<std::endl;

//     std::cout<<std::endl;

//     //string
//     char e = 'e';
//     char f = 'f';
//     std::cout<<"e: "<<e<<std::endl;
//     std::cout<<"f: "<<f<<std::endl;
//     swap(e,f);
//     std::cout<<"e: "<<e<<std::endl;
//     std::cout<<"f: "<<f<<std::endl;
//     std::cout<<"MIN: "<<min(e,f)<<std::endl;
//     std::cout<<"MAX: "<<max(e,f)<<std::endl;
//     std::cout<<std::endl;
//     return 0;
// }
