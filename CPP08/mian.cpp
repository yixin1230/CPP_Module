// this main is for my own practice 
// compile: c++ -std=c++11 main.cpp

#include <queue>
#include <set>
#include <iostream>

int main()
{
    // size will be 5 not 7
    // because the set will get rid of the additional one
    std::set<int> set1 = {5,4,3,2,1,1,1};
    std::cout<< "size: "<<set1.size()<<std::endl;

    set1.insert(0);
    //this is not working :std::cout<<set1[0]<<std::endl;
    //how to get the value out of a set:
    //use a iterator
    std::set<int>::iterator it = set1.begin();
    it++;
    std::cout << "2nd: "<< *it << std::endl;

    if (!set1.empty())
    {
        for(int i : set1)
            std::cout<< i << std::endl;
    }
    return 0;
}