#include <iostream>
#include <string>
using namespace std;
void swap(int *a, int *b){
    *a=*a^*b;
    *a=*a^*b;
    *a=*a^*b;
}

int main()
{
    int arr[]={4,5,3,2,6,5,7};
    int l=sizeof(arr)/sizeof(int);
    cout<<"unsorted arrey : ";

for (int  k = 0; k < l; k++)
    {
        cout<<arr[k];
        if(k<l-1){
            cout<<',';
        }
    }
    cout<<endl;
    cout<<"sorted array   : ";
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
    for (int  k = 0; k < l; k++)
    {
        cout<<arr[k];
        if(k<l-1){
            cout<<',';
        }
    }
    return 0;
}