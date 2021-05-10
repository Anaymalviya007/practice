#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent 
{   public:
    Parent ()
    {
	cout<<"parent"<<endl;
}
};

// Sub class inheriting from Base Class(Parent)
class parentA 
{    public:
	   parentA (){
	cout<<"parentA"<<endl;
}
};
class child : public Parent,public  parentA
{    public:
	   child ()
	   {
	cout<<"child"<<endl;
    }
};
class subchild : public child
{

};


//main function
int main()
{
	
		subchild oj;
		
		return 0;
}
