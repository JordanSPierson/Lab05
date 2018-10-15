
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

//[2]
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

//[3]
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

//[4]
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

//[5]
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