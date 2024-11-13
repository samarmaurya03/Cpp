#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    cout<<"how much no. you will insert:";
    cin>>a;
    vector<int>vec(a); 

    for (int j = 0; j < a; j++)
    {
        cin>>vec[j];
    }
    cout<<"who's number u shearch: ";
    cin>>n;
    for (int i = 0; i < a; i++) 
    {
        if (vec[i] == n) { 
            cout <<"no. " <<a<<" is present in index "<<i<<endl ; 
            break;
        }
    }
    
    return 0; 
}


