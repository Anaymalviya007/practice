#include <iostream>
using namespace std;

int main()
{
    int numerator ,denominator,result;
    cout<<"Enter the numbers "<<endl;
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)
            throw denominator;
        result = numerator/denominator;
    }
    catch(int ex)
    {
        cout<<"Exception divide by zero noy allowed"<<ex;
    }
    cout<<"division is "<<result;

    return 0;
}
