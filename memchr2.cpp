// CPP program to illustrate memchr()
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char arr[] = { 'b', 'a', 'd', 'e', 'f', 'A', 'g' };
	char* pc = (char*)memchr(arr, 'g', sizeof arr);
	if (pc != NULL)
		cout << "search character found\n";
	else
		cout << "search character not found\n";
}
