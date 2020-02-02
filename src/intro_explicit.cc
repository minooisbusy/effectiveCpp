#include<iostream>
using namespace std;
class Foo{
public:
    int m_foo;
    explicit Foo(int foo):m_foo(foo) {} // Restrict Auto type transformation
};

void printM_foo(Foo foo)
{
    cout<<foo.m_foo<<endl;
}

int main()
{
    int num = 43;
    Foo foo(num);
    printM_foo(foo);
}
