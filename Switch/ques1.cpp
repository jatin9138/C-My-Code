//Know about the syntax
#include<iostream>
using namespace std;
int main()
{
    int  n=2;
    cout<<endl;
    switch(n)
    {
        case 1: cout<<"First"<<endl;
        break;

        case 2: cout<<"Second"<<endl;
        break;
        
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;

    return 0;
}