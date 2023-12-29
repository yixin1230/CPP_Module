# Notes for this project

#### Why are objects able to access private members of other objects of the same class?
In object-oriented programming, object of the same class have access to each other's private members because they are considered to be part of the same "family" or type. This allow for easier communication and interaction between objects of the same type, enabling them to work together effectively.
```
//example:

ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
	this->_name = a._name;
	this->_hitPoints = a._hitPoints;
	this->_attackDamage = a._attackDamage;
	this->_EnergyPoints = a._EnergyPoints;
	return (*this);
}

```

#### 	Inheritance in classes
- A ```base class``` is also referred to as a ```superclass``` of a class that is derived from it and the ```derived class``` is a ```subclass``` of its base
- A derived class automatically contains all the data members of its base class, and (with some restrictions) all the function members. A derived class inherits the data members and function members of its base class

### access specifier (base class & class members)
- It determines how the members of the base class can be accessed within the derived class
- ```private```: members are totally private to the class. Not only can they not be accessed from outside of the base class, they also cannot be accessed from inside a class that inherits them
- ```protected```: members of a base class is accessible from within the derived class, but protected from outside interference
- Access to inherited members of a derived class object is not only determined by their access specification in the base class, but by both the access specifier in the base class and the access specifier of the base class in the derived class
