#include<iostream>
#include<deque>
using namespace std;

int main ()
{
	deque<int> dq;
	dq.push_front(1);

	if (dq.empty())
	{cout << "True";}
	else { cout << "Falee";}
	return 0;
}
