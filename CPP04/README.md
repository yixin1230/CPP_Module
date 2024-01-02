# Notes for this project

### Type of Polymorphism
#### Compile-time Polymorphism
* ```function overloading```
- When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 
* ```operator overloading```
#### Runtime Polymorphism
* ```funciton overriding```
- Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
* ```virtual function```

#### Virtual Function
- As known as virtual methods, is a member function that is declared within a base class and is re-defined by a derived class.
- When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the method.

#### Rules for Virtual Function
- Virtual functions cannot be static
- A virtual function can be a friend function of another class
- Virtual function should be accessed using a pointer or reference of base class type to achieve runtime polymorphism
- The prototype of virtual functions should be the same in the base as well as the derived class
- They are always defined in the base class and overridden in a derived class. It is not mendatory for the derived class to override , in that case, the base class version of the function is used.
- A class may have a virtual destructor but it cannnot have a virtual constructor.
<br>

#### Limitation of Virtual Functions
* Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it dose not know exactly which function is going to be called at compile time.
* Difficult to Debug: In a complex system, virtual function can make it a little more difficult to figure our where a function is being called from.

