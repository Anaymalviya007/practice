/* push_heap() :- This function is used to insert elements into heap. 
The size of the heap is increased by 1. New element is placed appropriately in the heap.

pop_heap() :- This function is used to delete the maximum element of the heap.
 The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	vector<int> v1 = {20, 30, 40, 25, 15};
	

	make_heap(v1.begin(), v1.end());

	cout << "The maximum element of heap is : ";
	cout << v1.front() << endl;
	

	v1.push_back(50);
	
	push_heap(v1.begin(), v1.end());
	

	cout << "The maximum element of heap after push is : ";
	cout << v1.front() << endl;

	pop_heap(v1.begin(), v1.end());
	v1.pop_back();
	
	
	cout << "The maximum element of heap after pop is : ";
	cout << v1.front() << endl;
	
	return 0;
}
