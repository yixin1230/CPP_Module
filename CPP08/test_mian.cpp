// this main is for my own practice 
// compile: c++ -std=c++11 main.cpp
//
#include <queue>
#include <set>
#include <iostream>
#include <map>

int main()
{
    //set
    // size will be 5 not 7
    // because the set will get rid of the additional one
    std::cout<<"set:"<<std::endl;
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

    //multi set
    //multi set can do all the thing that set do
    //however it is also going to be allowed to contain duplicate values
    std::cout<<std::endl;
    std::cout<<"multiset:"<<std::endl;
    std::multiset<int> mset1{1,1,2,6,2,3,0};
    mset1.insert(-9);
    if (!mset1.empty())
        for (int i : mset1)
            std::cout<<i<<std::endl;


    //map
    //map is just going to store key value pairs
    //cannot have duplicate keys
    std::cout<<std::endl;
    std::cout<<"map:"<<std::endl;
    std::map<int, std::string> map1; // first is key , second is value
    //insert map key and value
    map1.insert(std::pair <int, std::string> (1, "bob"));
    map1.insert(std::pair <int, std::string> (2, "lisa"));
    map1.insert(std::pair <int, std::string> (3, "marge"));
    map1.insert(std::pair <int, std::string> (4, "bart"));
    //find element base on the key
    auto match = map1.find(1);
    std::cout<<"use find() find 1 :"<< match->second <<std::endl;
    // use lower bound && upper bound
    auto bob = map1.lower_bound(1);
    std::cout<<"Lower bound: "<< bob->second<<std::endl;
    auto lisa = map1.upper_bound(1);
    std::cout<<"Upper bound: "<< lisa->second<<std::endl;
    //print out very thing inside of map
    std::map<int, std::string>::iterator it3;
    for (it3 = map1.begin(); it3 != map1.end(); ++it3)
    {
        std::cout<<"Key : "<< it3->first<<std::endl;
        std::cout<<"Value : "<<it3->second<<std::endl;
    }


    //multi map
    //multi map is like a map except you can have duplicate keys as long as the value are different
    std::cout<<std::endl;
    std::cout<<"multi map:"<<std::endl;
    std::multimap<int, std::string> mmap1; // first is key , second is value
    //insert map key and value
    mmap1.insert(std::pair <int, std::string> (1, "bob"));
    mmap1.insert(std::pair <int, std::string> (2, "lisa"));
    mmap1.insert(std::pair <int, std::string> (3, "marge"));
    mmap1.insert(std::pair <int, std::string> (4, "bart"));

    std::multimap<int, std::string>::iterator it4;
    for (it4 = mmap1.begin(); it4 != mmap1.end(); ++it4)
    {
        std::cout<<"Key : "<< it4->first<<std::endl;
        std::cout<<"Value : "<<it4->second<<std::endl;
    }

    return 0;
}