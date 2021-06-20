ssss
#include <bits/stdc++.h>
using namespace std;

int main()
{

	
	multimap<int, int> mp;


	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 2, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 1, 50 });
	mp.insert({ 4, 50 });


	auto it = mp.upper_bound(2);
	cout << "The upper bound of key 2 is ";
	cout << (*it).first << " " << (*it).second << endl;

	it = mp.upper_bound(3);
	cout << "The upper bound of key 3 is ";
	cout << (*it).first << " " << (*it).second << endl;

	
	it = mp.upper_bound(5);
	cout << "The upper bound of key 5 is ";
	cout << (*it).first << " " << (*it).second;
	return 0;
}
