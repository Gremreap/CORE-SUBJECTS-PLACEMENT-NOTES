#include<iostream>
using namespace std;
class Dog{
    public:
    void printd()
    {
      cout<<"This is a Dog";
    }

     void ambiguity()
    {
        cout<<"For resolution 1";
    }
};

class Cat{
    public:
    void printc()
    {
      cout<<"This is a Cat";
    }

    void ambiguity()
    {
        cout<<"For resolution 2";
    }
};

class Pet:public Dog,public Cat{
    public:
    void printp()
    {
        cout<<"Derived Class for multiple inheritance";
    }
};

int main()
{
    Pet p;
    p.printc();
    p.printp();

    p.printd();

    //for ambiguity resolution using scope resolution operator

    p.Dog::ambiguity();
    p.Cat::ambiguity();
}

