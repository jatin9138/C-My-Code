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

    while(n>=row)
    {
        int col=1;
        while(n>=col)
        {
            char ch='A'+row+col-2;
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }

    return 0;
}
