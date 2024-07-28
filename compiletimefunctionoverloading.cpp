#include<bits/stdc++.h>
using namespace std;

class Simple
{
  public :
    void fun()
    {
        cout<<"function with no argument"<<endl;
    }

    void fun(int x)
    {
        cout <<"function with single argument"<<endl;
    }
    void fun(int x,int y)
    {
        cout<<"function with double argument"<<endl;
    }
};

int main()
{
    Simple obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4,5);
    return 0;
}