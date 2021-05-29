// C++ program to demonstrate constructors

#include <bits/stdc++.h>
using namespace std;
class Base
{
	public:
	int id;
	
	//Default Constructor
	Base()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}
	
	//Parameterized Constructor
	Base(int x)
	{
		cout << "Parameterized Constructor called" << endl;
		id=x;
	}
};
int main() {
	
	// obj1 will call Default Constructor
	Base obj1;
	cout << " id is: " <<obj1.id << endl;
	
	// obj1 will call Parameterized Constructor
	Base obj2(21);
	cout << " id is: " <<obj2.id << endl;
	return 0;
}
