// exceptionHandlingClassActivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    cout << "|---------------|" << endl;
    cout << "| Program Start |" << endl;
    cout << "|---------------|" << endl;

    try {                               //a try block, this block will contain all of the statements that will be checked for exceptions.
        cout << "Inside try block\n";
        throw 2;                           //throwing an error, because an error is thrown it means that an exception had occured in the try block. 
        cout << "This will not execute";
    }

    catch (double i) { /*When an exception is caught the catch block of code will procceed. if a solution cannot be found then the code is terminated.
                        The catch datatype must be the same data type as the exception thrown otherwise an "exception unhandled" 
                        error will occur (abnormal program termination) and the exception will not be caught*/
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";
    return 0;
}