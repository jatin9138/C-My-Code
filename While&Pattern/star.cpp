#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    int col=0;
    int count=1;
    

    while(n>=row)
    {
        
        while(row-1>=col)
        {
            cout<<count<<" ";
            count=count+1;
            col=col+1;

        }
        col=0;
        cout<<endl;
        row=row+1;

    }


    return 0;
}
