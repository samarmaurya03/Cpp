#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int>vec1;
int main()

{
    
    int n;
    cout<<"enter no. : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>vec1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout<<vec1[j];
    }
    
    return 0;
}