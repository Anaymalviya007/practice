
#include <bits/stdc++.h>
using namespace std;

int main()
{

	
	multimap<int, int> mp;

	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 2, 60 });
	mp.insert({ 3, 20 });
	mp.insert({ 1, 50 });
	mp.insert({ 4, 50 });

	cout << "The elements from position 3 in multimap are : \n";
	cout << "KEY\tELEMENT\n";

	for (auto itr = mp.find(3); itr != mp.end(); itr++)
		cout << itr->first
			<< '\t' << itr->second << '\n';

	return 0;
}
