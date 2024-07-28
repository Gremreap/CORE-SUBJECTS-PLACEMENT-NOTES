#include<iostream>
using namespace std;

class implementabs{
    private:
    int a,b;

    public:

    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"The values are:"<<a<<" "<<b<<endl;
    }
};

int main()
{
    implementabs obj;
    obj.set(10,20);
    obj.display();
}