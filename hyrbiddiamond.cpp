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
    void func2()
    {
       cout<<"Child class 1"<<endl;
    }


      void ambiguity()
    {
        cout<<"check 2"<<endl;
    }
};

class C:public A{
    public:
    void func3()
    {
      cout<<"Child class 2"<<endl;
    }

    void ambiguity()
    {
        cout<<"check 3"<<endl;
    }
};

class D:public B,public C{
    public:
    void func4()
    {
        cout<<"Hybrid class derived"<<endl;
    }
};

int main()
{
    D obj;
    obj.func2();
    obj.func4();

    obj.func3();
    

    //ambiguity resolution for hybrid model
    obj.B::ambiguity();
    obj.C::ambiguity();
}