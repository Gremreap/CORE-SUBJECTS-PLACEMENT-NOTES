#include<iostream>
using namespace std;
class A{
    public:
    void func1()
    {
        cout<<"Base Class"<<endl;
    }
};

class B:public A{
    public:

    void func1()
    {
        cout<<"Base Class 2"<<endl;
    }
};

class C:public B{
    public:

    void func1()
    {
        cout<<"Base class 3"<<endl;
    }
};

int main()
{
    C obj;
    

    //to remove ambiguity
    obj.B::func1();

    obj.C::func1();

    obj.A::func1();
}
