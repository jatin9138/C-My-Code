//Fibonnaci Series

#include<iostream>
using namespace std;

int fibo(int n)
{   
    int a=0;
    int b=1;
    for(int i=2; i<n; i++)
    {
        int ans=a+b;
        a=b;
        b=ans;
    }
    return b;
}



int main()
{   
    int n;
    cout<<"Enter the value: ";
    cin>>n;

    int answer=fibo(n);
    cout<<"Answer is: "<<answer<<endl;

    return 0;

}