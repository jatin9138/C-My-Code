//Number is Prime or Not
#include<iostream>
using namespace std;

//1 -> its a prime no.
//0 -> not a prime no.

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}