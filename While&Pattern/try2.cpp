#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >>n ;
    int row=1;
    int ch=1;
    
    while(row<=n) 
    {
        int col=1;
        
        while(col<=row)
        {
            cout<<ch<<" ";
            col=col+1;
            ch=ch+1;
        }
        cout<<endl;
        row=row+1;
    }

    return 0;
}
