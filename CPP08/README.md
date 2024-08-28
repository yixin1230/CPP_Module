# Notes for this project

## deque - Double-ended queues 
- is an indexed sequence container that allows fast insertion and deletion at both its end and its beginning. In addition, insertion and deletion at either end of a deque never invalidates pointers or references to the rest of the elements.

```
int main()
{
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};
 
    // Add an integer to the beginning and end of the deque
    d.push_front(13);
    d.push_back(25);
 
    // Iterate and print values of deque
    for (int n : d)
        std::cout << n << ' ';
    std::cout << '\n';
}
```

## default type
- means if I don't tell you what type is, the compiler can assume that it's this type.
```
Template<typename T = float>
// In this case compiler assume the T value is float
```


## STL containrtd overview
- sequence containers: array, vector, forward_list, list, deque
- container adapters: not full container classes on their own, but wrappers around other container types. They encapsulate the underlying container type and user interfaces accordingly: stack, queue, priority_queue
- associative containers: set, map, multiset, multimap
- unordered associative containers: unordered_set, unordered_map, unordered_multiset, unordered_multimap

<br>

### std::stack

- The ```std::stack``` class is a container adapter that gives the programmer the functionality of a stack (a LIFO (last-in, first-out) data structure).

- The class template acts as a wrapper to the underlying container - **only a specific set of functions is provided**. The stack pushes and pops the element from the back of the underlying container, known as the top of the stack

- ```stacks``` are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements

- The following operations are supported:
    - ```empty```: check if the stack is empty or not
    - ```size```: returns the number of elements present in the stack
    - ```push```: insert the element at the top of the stack
    - ```pop```: removes single topmost element from the stack. It does not return anything
    - ```top```: returns the topmost element of the stack. It returns the element but not removes it.
    - ```swap```: swaps the elements of the two stacks

### understanding ```std::stack``` and its unserlying container
- ```std::stack```is an adapter: meaning it provides a specific interface on top of another container. This underlying container actually stores the elements, while ```std::stack``` provides the stack operations (like push, pop, top)
- default underlying container(```std::deque```):by default, the underlying container for ```std::stack``` is a ```std::deque```. However, ```std::stack``` can also use other containers like ```std::vector``` or ```std::list```, as long as they support the necessary operations (push_back, pop_back, and back)

### templates & iterators
