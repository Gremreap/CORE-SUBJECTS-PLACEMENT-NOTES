#include<iostream>
using namespace std;

class A{
    public:
    void funcA()
    {
        cout<<"Base Class"<<endl;
    }
};

class B:public A{
    public:
    void funcB()
    {
        cout<<"Derived class";
    }
};

int main()
{
    B obj;
    obj.funcA();
    obj.funcB();

    //properties accessed from derived class

    return 0;

}
