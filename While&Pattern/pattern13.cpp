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
    while(row<=n) 
    {
        int space = 1,col=1;
        while(space<row)
        {
            cout<<" ";
            space=space+1;
        }
        while(col<=n-row+1)
        {
            cout<<"*";
            col=col+1;
        }
        row=row+1;
        cout<<endl;       
    }

    return 0;
}
