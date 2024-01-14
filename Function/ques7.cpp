//Total number of set bit

#include<iostream>
using namespace std;

int fun(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int store(int a, int b)
{
    int c=fun(a);
    int d=fun(b);
    int ans=c+d;

    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int answer=store(a,b);
    cout<<"Answer is: "<<answer<<endl;

}