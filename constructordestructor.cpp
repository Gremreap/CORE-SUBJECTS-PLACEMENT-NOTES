#include<iostream>
using namespace std;

class student{
    string s;
    public:
    int a;
    bool b;

    //default constructor
    student()
    {
        cout<<"Default Constructor"<<endl;
    }

    //parameterized constructor

    student(string s,int a,int b)
    {
      this->s=s;
      this->a=a;
      this->b=b;

      //this keyword used to distinguish both the parameters

      cout<<"Parameterized Constructor"<<endl;
    }

    //copy constructor

    student(student &p)
    {
        s=p.s;
        a=p.a;
        b=p.b;

        cout<<"Copy Constructor"<<endl;
    }

    void printinfo()
    {
        cout<<"Name=";
        cout<<s<<endl;
        cout<<"Age=";
        cout<<a<<endl;
        cout<<"Gender";
        cout<<b<<endl;
        cout<<endl;
    }
   
   //Destructor has been invoked
    ~student()
    {
        cout<<"Deestructor has been invoked making our object destroy and freeing memory space"<<endl;
    }
};

int main()
{
    //default 
    student s1;
    s1.printinfo();
    //garbage values at first case

    student s2("sumeet",20,1);
    s2.printinfo();

    student s3(s2);
    s3.printinfo();


    return 0;

}


