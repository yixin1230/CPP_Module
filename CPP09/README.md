# Notes for this project

## strem classes in c++
- ofstream: this class describes an output stream. It is used to create files and to write data to files.
- ifstream: this class describes an input stream. It's a program that read data from files and display it.
- fstream: this class describes a file stream in general. It has ofstream and ifstream capabilities. This means it can create files, write to files, and read data from files.

## getline(string)
```istream.getline(istream & is, string &str, char delim)```
- is: It is an object of istream class and tells the function about the stream from where to read the input from.
- str: It is a string objects, the input is stored in this object after being read from the stream.
- delim: this is the delimitation charater which tells the function to stop reading further input after reaching this character
```
char y_name[MAX_NAME_LEN];
cin.getline(Y_NAME, MAX_NAME_LEN)
```

```
    std::string line;
    std::fstream csv("data.csv", std::ios::in);
    if (csv.is_open())
    {
        while (!csv.eof())
        {
            getline(csv, line);
        }
    }
    reuturn 0;
```

## split
- Method1: Using stringstream API of C++
```
#include <bits/stdc++.h>
using namespace std;

// A quick way to split strings separated via spaces.
void simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}

// A quick way to split strings separated via any character
// delimiter.
void adv_tokenizer(string s, char del)
{
    stringstream ss(s);
    string word;
    while (!ss.eof()) {
        getline(ss, word, del);
        cout << word << endl;
    }
}

int main(int argc, char const* argv[])
{
    string a = "How do you do!";
    string b = "How$do$you$do!";
    // Takes only space separated C++ strings.
    simple_tokenizer(a);
    cout << endl;
    adv_tokenizer(b, '$');
    cout << endl;
    return 0;
}
```
<br>
```Output : How 
     do 
     you
     do!```

- Method 2: Using C++ find() and substr() APIs.
- This method is more robust and can parse a string with any delimiter, not just spaces. The logic is pretty simple to understand from the code below.
```
void tokenize(string s, string del = " ")
{
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        cout << s.substr(start, end - start) << endl;
    } while (end != -1);
}
int main(int argc, char const* argv[])
{
    // Takes C++ string with any separator
    string a = "How$%do$%you$%do$%!";
    tokenize(a, "$%");
    cout << endl;

    return 0;
}
```

## The Do/while Loop 
- The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
```
do {
  // code block to be executed
}
while (condition);
```

# insertion sort
- in insertion sort we virtually split the given array into sorted and unsorted part. After that, we insert each element from the unsorted part to its correct position in the sorted part.
## Time complexity
- the worst case time complexity for sorting an array using insertion sort algorithm will be O(n^2), where n is total number of elements in the given array.
- the worst case time complexity of insertion sort is maximum among all sorting algorithm but it takes least time if the array is already sorted. its best case time complexity is minimum which is O(n).
<br>

# merge sort
- in merge sort we split the given array in two parts and sort them individually and then we merges the both sorted halves. It is based on divide and conquer algorithm.
- we divide the given array into two equal halves until only single element is left. the array cannot be divide further.
## Time complexity
- the worst case, best case, and the average case time complexity of merge sort is O(N*log(N)). The worst case time complexity of merge sort is minumim among all sprting algothims.
<br>

# combined algorithm
1. First of all we will divide the given N elements of array into (N/K)groups of each group of size K.
2. Now we will sort each sub-arry of size k like we used to do in Insertion sort.
3. Now after sorting each sub-arry we will merge(N/K) sorted sub-arrays like we used to do in merge sort.


# resource
* [Reverse Polish Notation](https://medium.com/@tech.interview.buddies/reverse-polish-notation-b88524252960)
* [Ford-Johnson merge-insertion sort](https://codereview.stackexchange.com/questions/116367/ford-johnson-merge-insertion-sort)
* [Merge Insertion Sort](https://iq.opengenus.org/merge-insertion-sort/)