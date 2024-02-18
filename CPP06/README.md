# Notes for this project

### Casting in C vs C++
#### Casting in C
- implidcit conversion (ot's not something that we necessarily have to specity hey I'm converting this type into this type)
```
//examle
double value = 5.25;
int a = value; // a = 5
```
<br>
- explicit conversion
```
//examle
double value = 5.25;
int a = (int)value;
```
<br>

#### Casting in C++
```
//examle
double s = static_cast<int>(value);
```
