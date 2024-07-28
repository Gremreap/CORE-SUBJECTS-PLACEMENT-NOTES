#include<iostream>
using namespace std;
class encapsulation{
    private:

    int x;

    public:

    void set(int a)
    {
        x=a;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    encapsulation obj;
    obj.set(5);

    cout<<obj.get();

    return 0;
}

/*


In normal term encapsulation is defined as wrapping up of data and information under a single unit.
Encapsulation define as binding together the data and function that manipulates them.


Advantages

Increased security of data.
Encapsulation allows access to a level without revealing the complex details below that level.
It reduces human errors.
Makes the application easier to understand.

*/