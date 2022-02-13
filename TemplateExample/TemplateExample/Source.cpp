//This goes over examples of both class and function templates
#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Class template example for a stack
template <class T>
class Stack
{
private:
	vector<T> elems;

public:
	void push(T c);
	void pop();
	T top();
	
	bool empty() 
	{
		return elems.empty();
	}
};


//Class template "push" method
template <class T>
void Stack<T>::push(T c)
{
	//Adds item to the elems
	elems.push_back(c);
}


//Function Template Example
//T will replace the data type, but the later used types MUST match
template <typename T>
T Max(T a, T b)
{
	return a < b ? b : a;
}


int main()
{
	//Example code for the class template, using the push function created above
	//This is a class template, assigning the int as the data type
	vector<int> myIntVector;

	myIntVector.push_back(2);


	//Example code for the template function
	/*int myInt;

	char myChar;

	myInt = Max(3, 7);

	cout << myInt;*/

	return 0;
}