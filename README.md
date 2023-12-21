
## Functions:
#### [insert()](https://www.geeksforgeeks.org/vector-insert-function-in-cpp-stl/)
```
vector_name.insert (position, val);
vector_name.insert(position, size, val);
```

#### [erase()](https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/)

```
vector_name.erase(position);    for deletion at specific position
vector_name.erase(starting_position, ending_position);    // for deletion in range
```
##### Example:
```
Input:    myvector= {1, 2, 3, 4, 5}, iterator= myvector.begin()+2
        myvector.erase(iterator);
Output:    1, 2, 4, 5

Input:    myvector= {1, 2, 3, 4, 5, 6, 7, 8}, iterator1= myvector.begin()+3, iterator2= myvector.begin()+6
        myvector.erase(iterator1, iterator2);
Output:    1, 2, 3, 7, 8
```

