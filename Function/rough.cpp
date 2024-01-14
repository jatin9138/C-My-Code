#include<iostream>
using namespace std;

int factorial(int m)
{
    int fact = 1;
    
    for(int i=1; i<=m; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numu = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans =numu/denom;
}

int main()
{
    int n,r;
    cin>>n>>r;

    cout<<"Answer is: "<<nCr(n,r)<<endl;
    return 0;
}