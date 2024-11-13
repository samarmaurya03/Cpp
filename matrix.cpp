#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter row : ";
    cin>>m;
    cout<<"enter column : ";
    cin>>n;

    int arr[m][n];
    cout<<"enter the value in row wise :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
            
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<"\n";
        
    }
    return 0;
}
