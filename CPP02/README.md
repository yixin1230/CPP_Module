# Notes for this project
#### void f() const 
Makes the function itself const, this only really has meaning for member functions.
Making a member function const means that it cannot call any non-const member funcitons, nor can it change any member variables.
It also means that the function can be called via a const object if the class

```
class A
{
public:
void Const_No(); // nonconst member function
void Const_Yes() const; // const member function
};

A obj_nonconst; // nonconst object
obj_nonconst.Const_No(); // works fine
obj_nonconst.Const_Yes(); // works fine

const A obj_const = A(); // const object
obj_const.Const_Yes(); // works fine (const object can call const function) obj_const.Const_No(); // ERROR (const object cannot call nonconst function)
```

#### Bitwise left shift
The bitwise left shift operator shifts the bits left by the bits specified by the right operand. The positions vacated by the left shift operator are filled with 0.
```
//Example: Let's perform the bitwise left shift operation on the integer 6. Each bit will be shifted left by 1.

//6 = 0110

6<<1; //= 1100 (binary) = 12 (decimal)
```
#### Bitwise right shift
Like the left shift operator, the bitwise right shift operator shifts the bits right by the bits specified by the right operand. The positions vacated by the right shift operator are filled with 0.

```
//Example: Let's perform the right shift by two bits operations on the integer 8. Each bit will be shifted right by 2.

//8 = 1000

8>>2 //= 0010 (binary) = 2 (decimal)
```

#### Initializer List
Initializer List is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon. 
```
//Following is an example that uses the initializer list to initialize x and y of Point class.

#include <iostream>
using namespace std;
 
class Point {
private:
    int x;
    int y;
 
public:
    Point(int i = 0, int j = 0): x(i), y(j) {}
    /*  The above use of Initializer list is optional as the
        constructor can also be written as:
        Point(int i = 0, int j = 0) {
            x = i;
            y = j;
        }
    */
 
    int getX() const { return x; }
    int getY() const { return y; }
};
 
int main()
{
    Point t1(10, 15);
    cout << "x = " << t1.getX() << ", ";
    cout << "y = " << t1.getY();
    return 0;
}
```
#### Convert Float to Fixed-point UQ4.12
* Example: Convert ```f = -3.1415923 to UQ4.12```
* Calucte ```f * 2^12 = -12867.964928```
* Round the result to the nearest, ```round(-12867.964928) = -12867```(in the assignment ex01 we only work till here)
* Organize into ```UQ4.12:0011.0010_0100_0100 2```
* Final result in Hex: 0xCDBC

#### Float-Point VS Fixed-Point 
##### Float-Point:
* Percision: difference between two neighbor numbers
* Precision decreases as the magnitude increases

##### Fix-Point:
* Numbers are evenly distributed among the representable range
* Precision is fixed

## Resources
* [Converting Fixed point to floating point format and vice versa](https://medium.com/incredible-coder/converting-fixed-point-to-floating-point-format-and-vice-versa-6cbc0e32544e)
* [bitwise](https://www.techtarget.com/whatis/definition/bitwise)
* [Initializer List](https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/)
