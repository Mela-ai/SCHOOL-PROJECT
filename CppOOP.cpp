// What is OOP?
// OOP stands for "Object-Oriented Programming."

#include <iostream>
#include <string>

/* C++ Classes: Multiple Inheritance */
class MyClass {
    public:
        void myFunction() { std::cout << "Some content in parent class.\n"; }
};

/* Second base class */
class MyOtherClass {
    public:
        void myOtherFunction() { std::cout << "Some content in another class.\n"; }
};

/* Derived class */
class MyChildClass : public MyClass, public MyOtherClass {};

/* main function */
int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    return 0;
}