
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x = 50.0;


	double result = acosh(x);

	cout << "acosh(50.0) = " << result << " radians" << endl;
	cout << "acosh(50.0) = " << result * 180 / 3.141592
		<< " degrees" << endl;
	return 0;
}
