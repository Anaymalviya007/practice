#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

int getMax(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}

int main()
{
	int arr[] = {15, 16, 10, 9, 6, 7, 17} ;
	int n = sizeof(arr) / sizeof(arr[0]);
	float MIN=getMin(arr, n) ;
	float MAX= getMax(arr, n);
	float range = MAX - MIN;
	float Coefficient = (MAX - MIN) / (MAX + MIN);
	cout<< "range: "<< range<<endl;
	cout<<"Coefficient: " << Coefficient<<endl;
  	
	return 0;
}