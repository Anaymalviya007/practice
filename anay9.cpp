#include<iostream>
using namespace std;

class Base
{	private:
	int a,b;
	public :
		Base()
		{
			a=0;
			b=0;
		}
		Base(int x ,int y)
		{
			a=x;
			b=y;
		
		}
		Base(const Base &e1)
		{
			a = e1.a;
			b = e1.b;
		}	
				int geta()
					{
						return a;
					}
				int getb()
					
				{
					return b;
				}

		

};

int main ()
{
		Base e1(12,13);
		Base e2=e1;
		cout<<e2.geta()<<" , "<<e2.getb()<<endl;
}
