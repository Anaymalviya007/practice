#include <iostream>
using namespace std;

class Point
{
private:
	int a, b;

public:

	Point(int x1, int y1)
	{
		a = x1;
		b = y1;
	}

	int getX()
	{
		return a;
	}
	int getY()
	{
		return b;
	}
};

int main()
{
	
	Point op(10, 15);


	cout << "op.x = " << op.getX() << ", op.y = " << op.getY();

	return 0;
}
