# Notes for this project

## Type Casting
- Casting is a techique by switch one data type to another data type. 
- The operator used for this purpose is known as the cast operator. It is a unary operator which forces one data type to be converted into another data type.
<br>

### Implicit conversion
- Done by compiler on its own
- Expressions containing more than 1 data type
- Type Promotion:
<br>```bool```->```char```->```short int```->```unsigned int```->```long->unsigned```->```long long```->```float```->```double```->```long double```<br>
- Can result in loss of information(sign, overflow)
```
//examle
double value = 5.25;
int a = value; // a = 5
```
### explicit conversion
#### C-Style type casting
```
//examle
double value = 5.25;
int a = (int)value;
```

#### Using casting operator

##### static_cast<type>

- Simplest type of cast
- Compile time cast
- static_cast<type>(Expression)
- It does thing like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones)
```
//examle
double s = static_cast<int>(value);
```

##### dynamic_cast<type>
- Involves a run-time type check
- Base class has to be polymorphic base class because it uses this information to decide safe downcasting.
- To work on dynamic_cast there must be one virtual function in the base class.
- On success returns a value of new_type 
- On failure:<br>
If type is pointer-> null pointer<br>
If type is reference-> bad_cast exception<br>

##### Downcasting
- Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting.
- casting from the base class pointer/reference to the derived class

##### Upcasting
- Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting.

###### ```RTTI```:<br>
- Run Time Type Identification
- provide a standard way for a program to determine the type of object during runtime
- Has run-time overhead
- Use static_cast when you are sure that you will not wrongly cast
- RTTI is provided through two operators:
1. ```typeid``` operator, returns the actual type of object referred to by pointer (or reference).
2. ```dynamic_cast``` operator,safely converts from pointer (or reference) to base type to pointer (or reference) to a derived type.


##### const_cast<type>
- used to cast away the constness of variables

##### reinterpret_cast<type>
- It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
- It does not check if the pointer type and data pointed by the pointer is same or not.
- Syntax:
```
data_type *var_name = reinterpret_cast <data_type *>(pointer_variable);
```
- It can perform dangerous conversion because it can typecast any pointer to any other pointer.
- It is used when you want to work with bits.
- The result of a reomterpret_cast cannot safely be used for anything other than being cast back to its original type 
- We should be very carful when using this cast
- if we use this type of cast then it becomes non-portable product

#### ```uintptr_t```
- is an unsigned integer type that is capable of storing a data pointer (whether it can hold a function pointer is unspecified). Which typically means that it's the same as a pointer.

### rand()
- not take any parameters
- return a pseudo-random number in the range of [0, RAND_MAX]
