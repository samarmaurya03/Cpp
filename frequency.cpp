#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> hash(10, 0);
    vector<int> arr = {2,5,8,7,7,7,2,5,9,6};
    
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int max = 0, most_frequent = -1;
    for (int j = 0; j < hash.size(); j++) {
        if(hash[j] > max) {
            max = hash[j];
            most_frequent = j;
        }
    }

    cout << "Most frequent element: " << most_frequent << endl;
    return 0;
}
