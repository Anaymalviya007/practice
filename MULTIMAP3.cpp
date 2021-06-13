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


	cout << "1 exists " << mp.count(1)
		<< " times in the multimap\n";

	
	cout << "2 exists " << mp.count(2)
		<< " times in the multimap\n";

	return 0;
}
