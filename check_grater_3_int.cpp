#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a input:";
    cin>>a;
    cout<<"b input:";
    cin>>b;
    cout<<"c input:";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"\na is grater";
    }
    else if (b>a && b>c)
    {
        cout<<"\nb is grater";
    }
    else if (c>a && c>b)
    {
        cout<<"\nc is grater";
    }
    else{
        cout<<"\nnon of thr number is grater";
    }
    
    

    return 0;
}