#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() // now display() is the virtual function
    {
        cout << "Displaying Base class variable : " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Base class variable : " << var_base << endl;
        cout << "Displaying Derived class variable : " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); //here DerivedClass display() called instead of BaseClass display()
    return 0;
}