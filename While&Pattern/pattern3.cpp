#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;

    while(n>=i)
    {
        int j=1;
        while(i>=j)
        {
             cout<<i-j+1<<" ";
             j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

    return 0;
}
