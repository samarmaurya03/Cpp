#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=90;
    int *ptr;
    
    *ptr=a;
    
    cout<<*ptr<<endl;
    return 0;  
}