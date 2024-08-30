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
