#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int i=1;
    int n;
    cin>>n;
    int count=1;


    while(n>=i)
    {
        int j=1;
        while(n>=j)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }


    return 0;
}
