# Notes for this project

## Type Casting

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
```
//examle
double s = static_cast<int>(value);
```

##### dynamic_cast<type>
- Involves a run-time type check
- Base class has to be polymorphic
- On success returns a value of new_type 
- On failure:<br>
If type is pointer-> null pointer<br>
If type is reference-> bad_cast exception<br>

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
- It can perform dangerous conversion because it can typecast any pointer to any other pointer.
- It is used when you want to work with bits.
- The result of a reomterpret_cast cannot saftyly be used for anything other than being cast back to its original type 
- We should be very carful when using this cast
- if we use this type of cast then it becomes non-portable product

