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

	cout << "multimap mp has " << mp.size()
		<< " number of elements";
	return 0;
}
