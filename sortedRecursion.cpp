#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    // base cases
    if (size==1||size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }
    
}



int main (){
    int arr [6]={2,3,4,5,6,7};
    int size=6;

    bool ans=isSorted(arr,size);

    if (ans==true){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}