#### void f() const 
makes the function itself const, this only really has meaning for member functions.
making a member function const means that it cannot call any non-const member funcitons, nor can it change any member variables.
It also means that the function can be called via a const object if the class

```
class A
{
public:
void Const_No(); // nonconst member function
void Const_Yes() const; // const member function
};
//-----------

A obj_nonconst; // nonconst object
obj_nonconst.Const_No(); // works fine
obj_nonconst.Const_Yes(); // works fine

const A obj_const = A(); // const object
obj_const.Const_Yes(); // works fine (const object can call const function) obj_const.Const_No(); // ERROR (const object cannot call nonconst function)
```