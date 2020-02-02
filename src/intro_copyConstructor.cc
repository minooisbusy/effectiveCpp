#include<iostream>
using namespace std;

// Constructor decleared explicit are usually preferable to non-explicit ones, because they preve
// -nt compilers from performing unexpected ( often unintended) type conversions. Unless I have a good reason for allowing a constrctor to be used for implicit type conversions, I declare it explicit. I encorage you to follow the same policy.
//
// Please note how i've highlighted the cast in the exmple above. 
//
// The **copy constructor** is used to initialize an object w/ a different object of the same type, and the **copy assignment opertor** is used to copy the value from one object to another same type:

class Widget
{
public:
    Widget();                                   // Default constuctor
    Widget(const Widget& rhs);                  //copy constructor
    Widget& operator=(const Widget& rhs);       // copy assginment operator
};

bool hasAcceptableQuality(Widget w);

int main()
{
    Widget w1;                                  // invoke default constructor
    Widget w2(w1);                              // invoke copy constructor
    w1=w2;                                      // invoke copy assignment operator

// Read carefully when you see what appears to be an assignment, because the "=" syntax can also be used to call the copy constructor:

    Widget w3 = w2;                             // invoke copy constructor!

// Fortunately, copy construction is easy to distinguish from copy assignment. If a new object is being defined (such as w3 in the statement above), a constructor has to be called; it can't be an assginment If no new object is being deifned (such as in the "w1 = w2" statement above), no constructor can be invoked, so it's assignment.)

// The copy constructor is a particularly important function, because it defines how an object is passed by value. For exmaple, consider this: ( go to line :19)
    cout<<"*** aWidget defined! ***"<<endl;
    Widget aWidget;
    
    if(hasAcceptableQuality(aWidget))
        cout<<"acceptable! "<<endl;
//The parameter w is passed to hasAcceptableQuality by value, so in the call above, aWidget is copied into w. The copying is done by Widget's copy constructor. Pass-by-value means "call the copy constructor." (However, it's generally a bad idea to pa2ss used-defined types by value. Pass-by-reference-to-const is typlically a better choise For details, see Item 20.)

}

Widget::Widget(){cout<<" Call Default Constructor"<<endl;}
Widget::Widget(const Widget& rhs){ cout<<" Call Copy Constructor" <<endl;}
Widget& Widget::operator=(const Widget& rhs){ cout<<" Call Copy Assignment Operator" <<endl; }
bool hasAcceptableQuality(Widget w)
{
    return true;
}

