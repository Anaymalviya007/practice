// C++ code to demonstrate working of remove() and
// remove_if()
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{

	forward_list<int> flist = {10, 20, 30, 25, 40, 40};
	

	flist.remove(40);
	

	cout << "The forward list after remove operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	flist.remove_if([](int x){ return x>20;});

	cout << "The forward list after remove_if operation : ";
	for (int&c : flist)
	cout << c << " ";
	cout << endl;

	return 0;

}
