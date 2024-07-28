#include <iostream>
using namespace std;
 
class Base {
private:
    int a;
 
protected:
    int b;
 
public:
    Base()
    {
        a = 1;
        b = 2;
    }
     
     // friend function declaration
    friend void func(Base& obj);

    // friend function definition
void func(Base& obj)
{
    cout << "Private Variable: " << obj.a << endl;
    cout << "Protected Variable: " << obj.b;
}
};
 
 

 
// driver code
int main()
{
    Base obj;
    obj.func(obj);
 
    return 0;
    
 }