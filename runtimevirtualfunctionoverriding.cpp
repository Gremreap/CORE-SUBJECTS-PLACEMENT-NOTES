#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Class Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Class Function" << endl;
    }
};

int main() {
    // Create the pointer of base class
    Base* bptr;
    // Create the object of base and derived class
    Base base;
    Derived derived;
    
    // In runtime, its depend on which class object
    // we are assigning in base pointer.
    
    // Base Class print function will call,
    // as we assign base class object
    bptr = &base;
    bptr->print();
    
    // Derived Class print function will call,
    // as we assign derived class object
    bptr = &derived;
    bptr->print();

    return 0;
}