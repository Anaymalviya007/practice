
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> mystack;
	mystack.push(5);
	mystack.push(1);
	mystack.push(2);


	cout << mystack.top();
	return 0;
}
