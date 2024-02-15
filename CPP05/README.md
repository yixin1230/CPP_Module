# Notes for this project

#### C++ Throw Exception Example
```
#include <iostream>
#include <stdexcept>

using namespace std;

int AddPositiveIntegers(int a, int b)
{
    if (a < 0 || b < 0)
        throw std::invalid_argument("AddPositiveIntegers arguments must be positive");

    return (a + b);
}

int main()
{
    try
    {
        cout << AddPositiveIntegers(-1, 2); //exception
    }

    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }

    return 0;
}
```
In this C++ throw exception example, the ```AddPositiveIntegers()``` function is called from inside the ```try``` block in the ```main()``` function. The ```AddPositiveIntegers()``` expects two integers ```a``` and ```b``` as arguments, and throws an ```invalid_argument``` exception in case any of them are negative.<br>
<br>
The ```std::invalid_argument``` class is defined in the standard library in the <stdexcept> header file. This class defines types of objects to be thrown as exceptions and reports errors in C++ that occur because of illegal argument values.<br>

The ```catch``` block in the ```main()``` function catches the ```invalid_argument``` exception and handles it.<br>

#### Throwing exceptions from C++ constructors

- An exception should be thrown from a C++ constructor whenever an object cannot be properly constructed or initialized. Since there is no way to recover from failed object construction, an exception should be thrown in such cases.

- Constructors should also throw C++ exceptions to signal any input parameters received outside of allowed values or range of values.

- Since C++ constructors do not have a return type, it is not possible to use return codes. Therefore, the best practice is for constructors to throw an exception to signal failure.

- The throw statement can be used to throw an C++ exception and exit the constructor code.

#### Member Functions vs Non-Menber Functions
