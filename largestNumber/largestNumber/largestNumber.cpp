// largestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int x, y, z; 
    cout << "please enter 3 intergers: ";
    cin >> x >> y >> z;

    if (x >= y && x >=  z) {
        cout << x << " is the greater number.";
    }

    else if (y >= x && y >= z) {
        cout << y << " is the greater number.";
    }

    else if (z >= x && z >= y) {
        cout << z << " is the greater number.";
    }
}

