
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x = 4.1, result;

	result = tanh(x);
	cout << "tanh(4.1) = " << result << endl;


	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = tanh(x);
	cout << "tanh(90 degrees) = " << result << endl;

	return 0;
}
