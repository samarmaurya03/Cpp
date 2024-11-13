#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[7]={5,4,6,4,7,8,1220},m=arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (m < arr[i])
        {
            m=arr[i];
        }
        
    }

    cout<<"this no. bigger: "<<m;

    return 0;
}