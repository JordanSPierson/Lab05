// 
// Lab7Driver.cpp
// Jordan Pierson
//COSC2030, Fall 2017

#include <iostream>
using namespace std;

#include "Lab5MyStack.h"

//This main method tests the functions for each question

int main()
{
	cout << "Enter a string: ";
	string eString,
		nString;
	cin >> eString;
	//Test for [2] stringReversal1 function using a STL stack
	nString = stringReversal1(eString);
	cout << "\nOutput using an STL stack: " << nString << endl;
	//Tests for [3] stringReversal2 funciton using a vector
	nString = stringReversal2(eString);
	cout << "Output using a vector: " << nString << endl;
	//Tests for [4] stringReversal3 function using an STL list
	nString = stringReversal3(eString);
	cout << "Output using a list: " << nString << endl;
	//Tests for [5] stringReversal5 using a stack class  
	nString = stringReversal4(eString);
	cout << "Outpout using a Stack class: " << nString << endl;

	cout << endl;
	system("pause");
	return 0;
}
