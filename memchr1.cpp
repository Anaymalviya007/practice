// CPP program to illustrate memchr()
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char sr[] = "This is a sample";
	char ch = 's';
	int count = 13;

	if (memchr(sr, ch, count))
		cout << ch << " is present in first "
			<< count << " characters of \"" << sr << "\"";
	else
		cout << ch << " is not present in first "
			<< count << " characters of \"" << sr << "\"";

	return 0;
}
