# Notes for this project

## Elements of the STL (Containers, Algorithms, Iterator)
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

### set
- In C++, a set is a container that stores unique elements following a specific order. It's part of the Standard Template Library (STL) and is defined in the <set> header. The elements in a set are stored in a tree structure (typically a balanced binary tree, like a Red-Black tree), which allows for efficient searching, insertion, and deletion operations. The unique property ensures that no two elements in the set are the same, and the ordering ensures that the elements are always sorted according to a specific criterion, usually using the < operator or a custom comparator.
- Unique Elements: Each element in a set must be unique. The set automatically removes duplicates, so only one instance of a particular value exists in the container at any time.
- Ordered: The elements in a set are stored in a sorted order. By default, this order is ascending, determined by the < operator. However, you can define a custom order by providing a comparator function or functor when declaring the set.
- Efficient Operations: Because of its underlying tree structure, a set provides efficient lookup, insertion, and deletion operations. These operations generally have logarithmic complexity, O(log n), where n is the number of elements in the set.
- Dynamic Size: Like other containers in the STL, a set can grow and shrink at runtime as elements are added or removed.

### When to use std::set
- When you need to store a collection of unique items
- When the order of elements is important and you want them to be automatically sorted
- When you need efficient search, insertion, and deletion of elements

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

