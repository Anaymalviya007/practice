// C++ code to demonstrate working of
// insert_after(), emplace_after() and erase_after()
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	forward_list<int> flist = {10, 20, 30} ;
	
	forward_list<int>::iterator ptr;

	
	ptr = flist.insert_after(flist.begin(), {1, 2, 3});
	
	
	cout << "The forward list after insert_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	ptr = flist.emplace_after(ptr,2);
	
	
	cout << "The forward list after emplace_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	
	ptr = flist.erase_after(ptr);
	
	
	cout << "The forward list after erase_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;

	return 0;
}
