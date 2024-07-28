#include<iostream>
using namespace std;
class Hero{
 

 private:

int check;
int m;

 public:
//access modifiers-public,private,protected

int value;
char health;


//constructor been created(default or parameterized)

Hero()
{
    cout<<"Constructor called"<<endl;
}

//parameterized constructor and using this pointer to allocate value to variable

Hero(int health)
{
    this->health=health;

    //this keyword to avoid confusion
}

void pop()
{
    cout<<check<<endl;
    //garbage values get printed;
}

//to access private members outside class (getter and setter concept)

int getvalue()
{
    return value;
}

void setvalue(int check,char val)
{
    if(val=='A')
    {
        value=check;
    }
}

void sethealth(int val)
{
    health=val;
}

int gethealth()
{
    return health;
}
};

int main()
{
    //static allocation object created

    Hero h1;
    //constructor within class gets called
    
    h1.setvalue(70,'A');
     h1.sethealth(90);
     cout<<"value is:"<<h1.getvalue()<<endl;
    cout<<"Health is:"<<h1.gethealth()<<endl;
    
    

    //dynamic allocation ,using -> as a reference pointer to that address

    Hero *h=new Hero();

    //value initiated
    

    h->setvalue(80,'A');
    h->sethealth(100);


    // * used as a dereference pointer for the values
  
    cout<<"value is:"<<(*h).value<<endl;
    cout<<"health is:"<<(*h).gethealth()<<endl;

    h1.setvalue(70,'A');

    h1.getvalue();

    //TO FIND OUT THE SIZE OCCUPIED BY THE MEMORY AREA IN HEAP ALLOCATED
    cout<<"The size of h1 is:"<<sizeof(h1)<<endl;
}
