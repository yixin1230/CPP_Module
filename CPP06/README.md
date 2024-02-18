# Notes for this project

## Casting

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
<br>

### explicit conversion
#### C-Style type casting
```
//examle
double value = 5.25;
int a = (int)value;
```
<br>


#### Using casting operator
##### static_cast<>
```
//examle
double s = static_cast<int>(value);
```
##### dynamic_cast<>
##### const_cast<>
##### reinterpret_cast<>
