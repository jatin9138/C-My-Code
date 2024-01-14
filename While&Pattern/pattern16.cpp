#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int count=1;
    int row=1;
    while(row<=n) 
    {
        int space=1;
        while(space<=n-row)
        {
            cout<<" ";
            space=space+1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row = row + 1;
    }

    return 0;
}
