#include<bits/stdc++.h>
using namespace std;
class multi
{ 
	public:
		void func(int x)
		{
			cout<<" vlaue of x is : "<< x<< endl;
		}
		void func(int x , int y)
		{
			cout<<" value of x and y is : "<< x<<","<<y<<endl;
		}
		void func(double x)
		{
			cout<<" value of x is : "<<x<<endl;
		}

};
int main ()
{
	multi obj;
	obj.func(7);
	obj.func(9,123);
	obj.func(54,3456);
	return 0;
}
