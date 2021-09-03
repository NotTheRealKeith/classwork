// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
        Quiz Answers

        1. B | Deriving a derived class from base class
        2. B | Comma
        3. C | Lose Dynamic binding & Polymorphism
        4. Multiple 
        5. C | 20, 10
        6. C | Error
        7. B | 2010
        8. A | Inherited
        9. A | 100

*/

#include <iostream>
using namespace std;

//          Activity 8
/* Parent Class */
class Parent {
public:
    void whoAreYou(){
        cout << "I am the Parent\n";
    }
};
/* Child Class */
class Child: public Parent {
public:
    void whoAreYou() {
        cout << "I am a Child\n";
    }
};
//          Activity 8


int main() {
    //          Activity 8
    Parent objP;
    Child objC;

    objP.whoAreYou();
    objC.whoAreYou();
    //          Activity 8

}