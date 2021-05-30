#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>list1 = {1, 2 ,3 ,4};

    list<int>list2 = {2, 4 ,6};

    //Displaying list befor swaping 
    cout<<"The content of 1st list before swaping are : ";
    for(int &x : list1)cout<<x<<' ';
    cout<< endl;

    cout<<"The contant of 2nd lsit before swaping are : ";
    for(int &x : list2)cout<<x<<' ';
    cout<<endl;

    //use of swap() to swap the list 
    list1.swap(list2);

    //Displaying list after swaping 
    cout<<"the contant of 1st list after swapping are :  ";
    for(int &x : list1)cout << x<< " ";
    cout << endl ;

    cout<<"the contant of 2st list after swapping are : ";
    for(int &x : list2)cout << x << ' ';
    cout << endl ;
    return 0;
    
            
}
