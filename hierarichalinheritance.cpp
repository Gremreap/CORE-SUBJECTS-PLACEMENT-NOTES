#include<iostream>
using namespace std;

class A{
    public:
    void func1()
    {
        cout<<"Base Class and parent class";
        cout<<endl;
    }
};

class B:public A{
    public:
    void func2()
    {
         cout<<"Child class 1";
         cout<<endl;
    }
};

class C:public A{
    public:
    void func3()
    {
        cout<<"Child Class 2";
        cout<<endl;
    }
};

int main()
{
    C obj;
    obj.func1();
    obj.func3();


    B obj1;
    obj1.func1();
    obj1.func2();
}