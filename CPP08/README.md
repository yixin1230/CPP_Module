# Notes for this project

# Elements of the STL (Containers, Algorithms, Iterator)
## Containers
- Collections of objects or primitive types
- (array, vector, deque, stack, set, map, etc.)

### Type of Containers
- sequence containers
- array, vector, list, forward_list, deque
<br>

- associative containers
- set, multi set, map, multi map
<br>

- container adapters
- stack, queue, priority queue


## Algorithms
- Functions for processing sequences of elements from containers
- (find, max, count, accumulate, sort, etc.)
- about 60 algorithms in the STL
- Non-modifying 
- Modifying

## Iterator
- iterator is an object (like a pointer) that points to an element inside the container.
- we can use iterators to move through the contents of the container. They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them.
- (forward, reverse, by value, by reference, constant, etc.)

### Input Iterators
- They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms.
- i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.

### Output Iterators
- Just like input iterators, thay are also very limited in their functionality and can only be used in single-pass algrorithm, but not for accessing elements, but for being assigned elements.

### Forward Iterators
- They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in a forward direction and that too one step at a time.

### Bidirectional Iterators
- They have all the features of forward iterator along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.

### Random-Access Iterators
- They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.

### Iterator begin and end methods
```
std::vector<int> vec {1,2,3};
vec.begin();
//first element
vec.end();
//location after last element
```

### ```auto```
- ```auto``` keyword in C++ is used for type inference, allowing the compiler to automatically deduce the type of a variable from its initializer. Since its introduction in C++11, auto has become a useful feature for making code more readable and less prone to error, especially when dealing with complex types or templates. It also simplifies the code by reducing the need for explicitly stated types.

```
auto x = 5; // x is deduced to be of type int
auto y = 3.24 // y is deduced to be of type double

std::vector<int> vec = {1,2,3,4,5};
auto z = vec.begin(); // z is deduced to be std::vector<int>::iterator

//auto can also be used to deduce the return type of a function
auto add(int a, int b)
{
    return a+b; // The return type is deduced to be int
}
```

### ```find()```
- The ```find()``` function in the C++ STL algorithm header <algorithm> is used to search for an element in a range of elements. It works with a wide varity of container types, including arrays, vectors, lists and other that provide iterators.
- The function searches for a specified value within a range specified by a pair of iterators and returns ann iterator to the first occurrence of the value in the range. 
- If the value is not found, the function returns an iterator to the end of the range.

```
iterator find(iterator start, iterator end, const T &value);
```

```
//example
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = {1,2,3,4,5};
    int valueToFind = 3;

    auto it = std::find(vec.begin(), vec.end(),valueToFind);
    if (it != vec.end())
        std::cout<<"Found"<<std::endl;
    std::cout<<"Not found"<<std::endl;
}
```