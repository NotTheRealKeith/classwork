// abstractionClassActivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Smartphone {
public:
    virtual void takeSelfie() = 0;   //By adding 'virtual' keyword and making it = 0 now has made this class an abstract class
    virtual void makeCall() = 0;     //Derived classes need to provide the function details if they want to use the virtual function
};

class Android : public Smartphone { //This derived class needs to provide the function details for main Smartphone class. 
                                    //It does NOT need to know what the derived iPhone class has done.
public:
    void takeSelfie() {
        cout << "\tAndroid took a selfie\n";
    }

    void makeCall() {
        cout << "\tAndroid Calling\n";
    }
};

class iPhone : public Smartphone {  //This derived class needs to provide the function details for main Smartphone class. 
                                    //It does NOT need to know what the derived Android class has done.
public:
    void takeSelfie() {
        cout << "\iPhone took a selfie\n";
    }

    void makeCall() {
        cout << "\iPhone Calling\n";
    }
};

int main()
{
    Smartphone* s1 = new iPhone();  //This only needs to know that both virtual functions are fulfilled before proceeding.
                                    //It does not need to know how either of the derived classes has implimented the functions, as long as it is done.
    s1->takeSelfie();
    s1->makeCall();   

    system("pause>0");
}
