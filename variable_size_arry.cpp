#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{   
    int x,q,n;
    int index,col,size,v;
    cin>>n>>q;
    vector<vector<int>>vac1;
    for (int i = 0; i < n; i++)
    {
        vector<int>i_vac;
        cin>>size;
        for (int  j = 0; j < size; j++)
        {   
            cin>>v;
            i_vac.push_back(v);
        }
        vac1.push_back(i_vac);
    }
    for (int  k = 0; k < q; k++)
    {
        cin>>index;
        cin>>col;
        cout<<vac1[index][col]<<endl;
    }
    
    
    return 0;
}