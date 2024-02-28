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