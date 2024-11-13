#include <iostream>
#include <string>
using namespace std;

void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*b-*a;

}


void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n=8,arr[]={3,4,5,34,3,4,1,2};
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
        
    }
    cout<<endl;
    bubble_sort(arr,n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
    return 0;
}