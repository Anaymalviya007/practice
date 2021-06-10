// C++ code to demonstrate the working of
// make_heap(), front()
#include<bits/stdc++.h>
using namespace std;
int main()
{
	

	vector<int> v1 = {20, 30, 40, 25, 15};
	
	
	make_heap(v1.begin(), v1.end()); // This function is used to convert a range in a container to a heap.
	

	cout << "The maximum element of heap is : ";
	cout << v1.front() << endl; //front() - This function displays the first element of heap which is the maximum number.
	
	return 0;
}
