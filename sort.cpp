#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "\n\n\n\n\n\n\nDerived Function\n\n\n\n\n\n\n\n" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}