# Notes for this project

#### const

- Variables declared with ```const``` added become constants and cannot be altered by the program

- ```const data members``` must be initialized using ```initialization list```. No memory is allocated separately for const data member. It is folded in the symbol table due to which we need to initialize it

- ```const data members``` is also a copy constructor. We don't need to call the assignment operator which means we are avoiding one extra operation

- **The more your code is ```const``` and ```read only```, the more your code will be robust in the long term**

> Example of const

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	float const pi;
	int qd;

	Sample(float const f);
	~Sample(void);

	// const between ) & ; -> the instance of the class will never be altered
	void bar(void) const;
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

// it's not assigning f value to pi attribute
// it's initialising pi attribute to the f value
Sample::Sample(float const f) : pi(f), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

// this is central to CPP
// define const when your member function should never be changed in the \
// current instance of your class
void	Sample::bar(void) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	// this assignment below won't work, as it's a const function
	// this->qd = 0;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int main() {

	Sample instance(3.14f);

	instance.bar();

	return (0);
}
```

> *Output*

```
this->pi = 3.14
this->qd = 42
Destructor called
```