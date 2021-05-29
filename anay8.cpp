#include<iostream>
using namespace std;
class base 
{	int x;
	public:
	void 	setint(int y)
		{	
			x=y;
		}
	void 	getint()
		{
			cout<<x<<endl;
		}
};

int main()
{
	base obj;
	obj.setint(12);
	obj.getint();
	return 0;	
}

