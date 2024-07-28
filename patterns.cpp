#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int value=i+1;
        for(int j=0;j<n;j++)
        {
            cout<<value<<" ";
        }

        cout<<endl;
    }
}