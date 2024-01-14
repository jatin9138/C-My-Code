//calculator
 #include<iostream>
 using namespace std;
 int main()
 {
    int a;
    int b;

    cout<< "Enter a value: "<<endl;
    cin>>a;
    
    cout<< "Enter the second value: "<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<(a+b)<<endl;
                  break;  

        case '-': cout<<(a-b)<<endl;
                  break;  

        case '*': cout<<(a*b)<<endl;
                  break;  

        case '/': cout<<(a/b)<<endl;
                  break;  

        case '%': cout<<(a%b)<<endl;
                  break;  

        default: cout<<"Please enter a valid Operation "<<endl;
    }
 }