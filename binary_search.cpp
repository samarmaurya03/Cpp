#include<bits/stdc++.h>
#include<string>
using namespace std;

int binary_search(int* arr ,int target,int size){
    int high= size - 1 ,low = 0;
    int mid = (low + high)/2;
    while(low < high){
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            high = mid-1;
            mid = (low+high)/2;
        }
        else if(target > arr[mid]){
            low = mid+1;
            mid = (low+high)/2;
        }
    }

} 

int main()
{
    int arr[4]={1,2,3,4};
    cout<<binary_search(arr,4,5);
    return 0;
}