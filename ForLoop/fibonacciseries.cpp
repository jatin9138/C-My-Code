#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;

    int n=5;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++)
    {
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
    
}