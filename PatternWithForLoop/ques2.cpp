//Rotated Simple Pyramid
/*
    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n; j++)
        {   
            if(j>=i)
            {
            cout<<"*";
            }

            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }


}