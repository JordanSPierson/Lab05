// 
// Lab7Driver.cpp
// Jordan Pierson
//COSC2030, Fall 2017

#include <iostream>
using namespace std;

#include "Lab5MyStack.h"


int main()
{
	cout << "Enter a string: ";
	string eString,
		nString;
	cin >> eString;
	nString = stringReversal1(eString);
	cout << "\nOutput using an STL stack: " << nString << endl;
	nString = stringReversal2(eString);
	cout << "Output using a vector: " << nString << endl;
	nString = stringReversal3(eString);
	cout << "Output using a list: " << nString << endl;
	nString = stringReversal4(eString);
	cout << "Outpout using a Stack class: " << nString << endl;

	cout << endl;
	system("pause");
	return 0;
}