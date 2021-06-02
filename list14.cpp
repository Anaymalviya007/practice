// C++ program to illustrate the
// before_begin() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	forward_list<int> fl = { 20, 30, 40, 50 };

	auto it = fl.before_begin();

	fl.insert_after(it, 10);

	cout << "Element of the list are:" << endl;

	
	for (auto it = fl.begin(); it != fl.end(); ++it)
		cout << *it << " ";

	return 0;
}
