#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    
    int prod=1;
    int sum=0;
    int digit=0;

    while(n!=0)
    {
        digit=n%10;
        prod=prod*digit;
        sum=sum+digit;

        n=n/10;
    }
    int sub=prod-sum;
    cout<<sub;


}
