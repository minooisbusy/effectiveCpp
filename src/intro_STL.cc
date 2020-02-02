#include<iostream>
using namespace std;
// The *STL* is the Standard Template Library, the part of C++'s standartd librady devoted to containers (e.g., vector, list, set, map, etc.), iterators( e.g, vector<int>::iterator, set<string>::iterator, etc.), algorithms (e.g., for_each, find, sort, etc.), and related functionality. Much of that related fundtionality has to do with function objects: objectst that act like functions. Such objects come from classes that overload.
// operator(), the functon call operator, If you're unfamiliar with the STL, you'll want to have a decent reference available as you read this book, because the STL is too useful for me not to take advantage of it. Once you've used it a little, you'll feel the same way.

// Parogrammers comming to C++ from language like Jave or C# may be surprised at the notion of **undefined behavior. Fora vriety of reason, the behavior of some constructs in C++ is literally not defined: you can't reliably predict what will happen at runtime. Here are two exmaple of code with undefined behavior:

int main()
{
    int a = 0;
    int *p = &a;                 // p is a null vector

    cout<< *p<<endl;;                  // dereferencing a null pointer

                                // yield undefined behavior
    char name[] = "Darlar";     // name is an array of 6 (don't
                                // forget the trailing null!)
    char c = name[10];          // referring to an invalid array index
                                // yields undefined behavior
}
// To emphasize that the results of undefined behavior are not predictable and may be very unpleasant experienced C++ programmers often say that programs w/ undefined behavior can erase your hard drive. It's true: a program with undefined behavior could erase your hard drive. But it's not probable.
//More liekly is that the program will behave erratically sometimes running normally, other times crashing, still orher times producing incorrect results.
// Effective C++ programmers do their best to steer clear of undefined behavior. In this book, I point out a number of places where you need to be on the lookout for it.
// Another term that may confuse programmers coming to C++ from another language is interface. Java and the .NET languages offer Interface as a language element, but there is no such thing in C++, though Item 31 discusses how to approximate them. When I use term "interface,: I'm generally talking about a function's signature, about accessible elements of a class (e.g., a class's "public interface," "protected interface," or "private interface"), or about the expressions that must be valid for a template's type parameter (see Item 41). That is, I'm talking about interfaces as a fairly general design idea. 

// A **Client** is someone or something that uses the code (typically the interfaces) you write. A function's clients, for example, are its users: the parts of the code that call the funcdtion (or take its address) as well as the humans who write and maintain such code. The clients of a class of a template are the parts of the software that use the class or template, as well as the programmers who write and maintain that code. When discussing clients, I typically foucs on programmers, because programmers can be confiused, misled, or annoyed by bad interfaces. The code they write can't be.
//
// You may not be used to thinking about client, but I'll spend a goot deal of time triying to convince you to make thier liveas as easy as you can. After all, you are a client of the software other peopqle develop.
// ...
