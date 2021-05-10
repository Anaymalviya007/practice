

#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
	public:
	int a;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int b;
};

//main function
int main()
{
	
		Child obj1;
		
		obj1.a = 20;
		obj1.b = 10;
		cout << "Child  is " << obj1.a<< endl;
		cout << "Parent is " << obj1.b << endl;
		
		return 0;
}
