// C++ code to demonstrate the working of
// emplace(position,value), emplace_front() and emplace_back(value)
#include<iostream>
#include<list> 
using namespace std;
int main()
{
	// Declaring a list
	list<int> gqlist;
	
	// Initialising list iterator
	list<int>::iterator it= gqlist.begin();
	
	
	for (int i=1; i<=5; i++)
	gqlist.emplace_back(i);
	
	cout << "List after emplace_back operation is : ";
	for (int &x : gqlist) 
    cout << x << " ";
	cout << endl;
	
	for (int i=10; i<=50; i+=10)
	gqlist.emplace_front(i);
	
	cout << "List after emplace_front operation is : ";
	for (int &x : gqlist) cout << x << " ";
	cout << endl;
	
	//it goes to second position 
	advance(it,2);
	
	// inserting element at 2nd position using emplace()
	gqlist.emplace(it,100);
	
	cout << "List after emplace operation is : ";
	for (int &x : gqlist) cout << x << " ";
	cout << endl;
	
	return 0;
	
}
