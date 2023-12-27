### void f() const 
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
## Resources
* [Converting Fixed point to floating point format and vice versa](https://medium.com/incredible-coder/converting-fixed-point-to-floating-point-format-and-vice-versa-6cbc0e32544e)
* [bitwise](https://www.techtarget.com/whatis/definition/bitwise)
