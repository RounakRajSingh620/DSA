#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str,int i ,int j){

    // base case

    if(i>j){
        return true;

    }
    if(str[i]!=str[j]){
        return false;
    }

    else{
        //recursive call
        return checkPalindrome(str,i+1,j-1);
    }
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
    if(checkPalindrome(str,0,n-1)){
        cout<<"Yes, it is a palindrome";
    }
    else{
        cout<<"No, it is not a palindrome";
    }
    return 0;

}