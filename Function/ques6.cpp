//AP(3*n+7)

#include<iostream>
using namespace std;

int AP(int n)
{
    int ans = (3*n)+7;

    return ans;
}


int main()
{
    int n;
    cin>>n;

    int answer=AP(n);
    cout<<"Answer is: "<<answer<<endl;


}