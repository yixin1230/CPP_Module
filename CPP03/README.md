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