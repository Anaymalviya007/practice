
#include <bits/stdc++.h>
using namespace std;

int main()
{


	multimap<int, int> mp;
	
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 5, 50 });


	cout << "The multimap before using erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr)
     {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}


	auto it1 = mp.find(2);
	auto it2 = mp.find(5);
	mp.erase(it1, it2);

	cout << "\nThe multimap after applying erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}
