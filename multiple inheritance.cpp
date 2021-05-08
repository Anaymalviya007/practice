#include <iostream>

using namespace std;

class add
{
    private:
    int a,b;
    
    public:
    
   void  setadd(int n,int z)
    {
        a=n;
        b=z;
    }
    
    
    int getadd()
    {
        return a+b;
    }
   
};
class sub
{
    private:
    int a,b;
    
    public:
    
   void  setsub(int n,int z)
    {
        a=n;
        b=z;
    }
    
    
    int getsub()
    {
        return a-b;
    }
   
};
class child: public add,public sub
{

};

int main()
{  
   int  w;
   cout<<"enter your choice for addition 1 .... for subtraction 2"<<endl;
   cin >> w;   
   if (w==1)
  { 
    child *p=new child(); 

    int c,v;
    cout <<"enter the element "<<endl;
    cin>>c>>v;
      p->setadd(c,v);
        cout<<p->getadd();
        
        
  }
  else if(w==2){
      child *x=new child;

      int c,v;
    cout <<"enter the element "<<endl;
    cin>>c>>v;
      x->setsub(c,v);
      cout<<x->getsub();
  }

    return 0;
}
