#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>list1={1,1,1,2,2,3,3,4};
    list<int>list2={2,4,6};
    list<int>:: iterator it = list1.begin();
    advance(it,3);
    cout<<"list1 before unique operator is : ";
    for (int &x : list1 )cout<<x<<" ";
    cout<<endl;
    list1.unique();
    cout<<"list1 after unique is : ";
    for (int &x : list1 )cout<<x<<" ";
    cout<<endl<<endl;
    list1.splice(it,list2);
    cout<<"list1 after splice operation is : ";
    for(int &x : list1)cout<<x<<" ";
    cout<< endl;
    return 0;

    
}
