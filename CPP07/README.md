# Notes for this project

## Templates
- blueprint
- function and class templates
- allow plugging-in any data type
- compiler generates the appropriate function/class from the blueprint
- generic programming / meta-programming

## Class Template
- similar to function template, but at the class level
- allows plugging-in any data type
- compiler generates the appropriate class from the blueprint
```
template <typename T>
class Item
{
    private:
        std::string name;
        T           value;
    public:
        Item(std::string name, T value):name(name), value(value){}
        std::string get_name() const {return name;}
        T   get_value() const {return value;}
};
```
```
int main()
{
    //some example
    Item<int> item1("Frank", 100);
    Item<std::string> item2{"Frank", "Professor"};
    Item<Item<std::string>> Item3{"Frank", {"C++", "Professor"}};
}
```