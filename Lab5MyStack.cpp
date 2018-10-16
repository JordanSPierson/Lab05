
#include <iostream>
#include <limits>
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <stack>
using namespace std;
using std::vector;

//the Lab7MyStack.h file
#include "Lab5MyStack.h"

//[2] Function definitions for stringReversal1 which stores the string (argument) into a STL stack,
//then reverses it and takes the elements out of the stack to store in a string which is then returned.
string stringReversal1(string input)
{
	stack<char> stack1;
	for (int i = 0; i < input.size(); i++)
	{
		stack1.push(input[i]);
	}
	string rString;
	for(int i = 0; i <input.size(); i++)
	{
		rString.push_back(stack1.top());
		stack1.pop();
	}
	return rString;
}

//[3] Function definitions for stringReversal2 which stores the string (argument) into a vector,
//then reverses it and takes the elements out of the vector to store in a string which is then returned.
string stringReversal2(string input)
{
	vector<char> vec1;
	for (int i = 0; i < input.size(); i++)
	{
		vec1.push_back(input[i]);
	}
	string rString;
	for (int i = 0; i <input.size(); i++)
	{
		rString.push_back(vec1.back());
		vec1.pop_back();
	}
	return rString;
}

//[4] Function definitions for stringReversal3 which stores the string (argument) into a list,
//then reverses it and takes the elements out of the list to store in a string which is then returned.
string stringReversal3(string input)
{
	list<char> list1;
	for (int i = 0; i < input.size(); i++)
	{
		list1.push_front(input[i]);
	}
	string rString;
	for (int i = 0; i <input.size(); i++)
	{
		rString.push_back(list1.front());
		list1.pop_front();
	}
	return rString;
}

//[5] Class definitions for a stack using first a vector (commented out) thena  list (uncommented)
class Stack
{ 
public:
	Stack() {}
	
	~Stack() {}
	
	void push(char item) 
	{
		data.push_back(item);
	}
	char pull() 
	{ 
		char item = data.back(); 
		data.pop_back(); 
		return item; 
	}
	bool isEmpty() const
	{
		return data.size() == 0; 
	}

private:
	//vector< char > store; 
	 list <char> data;
};
//[5] Function definitions for stringReversal4 which stores the string (argument) into a class stack,
//then reverses it and takes the elements out of the stack to store in a string which is then returned.
string stringReversal4(string input)
{
	Stack stack1;
	for (int i = 0; i < input.size(); i++)
	{
		stack1.push(input[i]);
	}
	string rString;
	for (int i = 0; i <input.size(); i++)
	{
		rString.push_back(stack1.pull());
	}
	return rString;
}
