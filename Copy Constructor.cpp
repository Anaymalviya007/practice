#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    
    public:
    
        base(int x,int y)
        {
            a=x;
            b=y;
        }
        base(const base &a1)
        {
            a=a1.a;
            b=a1.b;
        }
      int   getadd()
        {
            return a+b;
        }
};
int main()
{
    base a1(10,15);
    base a2=a1;
    cout << "\nsum= " << a2.getadd() ;
}
