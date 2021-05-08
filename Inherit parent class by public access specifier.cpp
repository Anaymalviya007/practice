

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
class add_subchild:public  add
{    

};

int main()
{   add_subchild *p=new add_subchild(); 
    int c,v;
    cout <<"enter the element "<<endl;
    cin>>c>>v;
      p->setadd(c,v);
        cout<<p->getadd();    
  

    return 0;
}
