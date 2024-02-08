#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(vector<int>&arr,int n){
    for(int i =0;i<n;i++){
        // for round 1 to n-1
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j,arr[j+1]]);
            }
        }
    }
}