//topic: introduction to smart pointer

// note : 
//0. smart pointer is a class which wraps a raw pointer to manage the life time of the pointer ;
//1. The most fundamental job of smart pointer is to remover the chances of memory leak.
//2. It makes sure that object is deleted if it id not reference any more.

// TYPE :

// 1. unique_ptr :
//    Allows only one owner of the underlying pointer.

// 2. shared_ptr : 
//	  Allows multiple owner of the same pointer(reference count is maintainer=d).

// 3. weak_ptr :
// 	  it is special type of shared pointer which  dosent count the reference.

#include<iostream>
using namespace std;

class Myint 
{	 
	private :
		int *data;
	public :

		Myint(int *p=nullptr) {data = p;}
		~Myint(){delete data;}
		int& operator * () {return *data;}

};

int main()
{
	int* p = new int(10);
	Myint myint = Myint(p);
	cout<<*myint<<endl;
	return 0;
}