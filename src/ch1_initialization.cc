#include<iostream>
using namespace std;

// **Initialization** is the process of giving an object its first value. For objects generated from structs and classes, initialization is performed by constructors. A **default constructor** is one that can be called without any argments. Such a constructor either has no parameters or has a default value for every parameter.
class A
{
public:
    A(); // Default constructor
};

class B
{
public:
    explicit B(int x = 0, bool b = true):m_x(x){}; // default constructor; see below for info on "explicit"
    int m_x;
};

class C
{
public:
    explicit C(int x); // Not a default constructor
};

// The constructors for classes B and C are declared **explicit** here. That prevents them from beeing used to perform implicit type conversions:

void doSomething(B bObject); // a function taking an object of type B

int main()
{
    B bObj1;                    // an object of type B
    doSomething(bObj1);         // Fine, passes a B to doSomething
    B bObj2(28);                // Fine, creates a B from the int 28 (the bool defaults to true) 

    /*doSomething(28);*/        // Error! doSomething takes a B, Not an int, and there is no
                                // implicit conversion from int to B
    
    doSomething(B(28));         // Fine, uses the B constructor to explicitly convert (i.e., cast)
                                // the int to a B for this call. (See Item 27 for info on casting)
}

void doSomething(B bObject)
{
    cout<<bObject.m_x<<endl;
}
