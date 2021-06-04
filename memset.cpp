//We can use memset() to set all values as 0 or -1 for integral data types also. It will not work if we use it to set as 
//other values. The reason is simple, memset works byte by byte. 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];

	// all elements of A are zero
	memset(a, 0, sizeof(a));
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;

	// all elements of A are -1
	memset(a, -1, sizeof(a));
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;

	// Would not work
	memset(a, 5, sizeof(a)); // WRONG
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
}
/*
#include <cstring>
#include <iostream>
 
using namespace std;
 
int main()
{
    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str;
    return 0;


    output is : ttttttttttttt
}*/
