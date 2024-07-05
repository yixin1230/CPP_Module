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

##
