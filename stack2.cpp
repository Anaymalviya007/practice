
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int c = 0;

	stack<int> mystack;
	mystack.push(5);
	mystack.push(13);
	mystack.push(0);
	mystack.push(9);
	mystack.push(4);

	while (!mystack.empty()) {
		mystack.pop();
		c++;
	}
	cout << c;
}
