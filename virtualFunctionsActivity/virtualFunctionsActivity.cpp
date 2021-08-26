// virtualFunctionsActivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//----- Main class -------
class Person {
protected:
	string name;
public:
	void getName() {
		cout << "\nEnter name : ";
		cin >> name;
	}

	void putName() {
		cout << name;
	}

	virtual void getData() = 0;//pure virtual function

	virtual bool isOutstanding() = 0;//pure virtual function
};
//------------------------

//----- Derived class -----
class Student : public Person {
private:
	float gpa;
public:
	void getData() {
		cout << "Enter student\'\s GPA : ";
		cin >> gpa;
	}

	bool isOutstanding() {
		if (gpa >= 6) {
			return true;
		}
		else {
			return false;
		}
	}
};
//-------------------------

//----- Derived class -----
class Professor : public Person {
private:
	int numPub;
public:
	void getData() {
		cout << "Enter professor\'\s number of publications : ";
		cin >> numPub;
	}

	bool isOutstanding() {
		if (numPub >= 200) {
			return true;
		}
		else {
			return false;
		}
	}
};
//-------------------------

//----- Main -----
int main()
{
	Student stdnt1, stdnt2, stdnt3; //object of Student derived class
	Professor prf1, prf2, prf3; //object of Professor derived class

	//arrays of pointers to base class
	Person* prsnArrStud[3] = { &stdnt1, &stdnt2, &stdnt3 };//putting memory addresses of Student objects in array
	Person* prsnArrProf[3] = { &prf1, &prf2, &prf3 };//putting memory addresses of Professor objects in array

	bool outstanding;

	for (int i = 0; i < 3; i++) {
		cout << "Enter student " << i + 1;
		//executing the following functions in all objects of Student
		prsnArrStud[i]->getName();
		prsnArrStud[i]->getData();
		cout << endl;
	}

	for (int j = 0; j < 3; j++) {
		cout << "Enter professor " << j + 1;
		//executing the following functions in all objects of Professor
		prsnArrProf[j]->getName();
		prsnArrProf[j]->getData();
		cout << endl;
	}


	//printing students
	for (int k = 0; k < 3; k++) {
		prsnArrStud[k]->putName();
		outstanding = prsnArrStud[k]->isOutstanding();
		if (outstanding == true) {
			cout << " : This person is outstanding";
		}
		cout << endl;
	}

	//printing professors
	for (int l = 0; l < 3; l++) {
		prsnArrProf[l]->putName();
		outstanding = prsnArrProf[l]->isOutstanding();
		if (outstanding == true) {
			cout << " : This person is outstanding";
		}
		cout << endl;
	}
}
//----------------