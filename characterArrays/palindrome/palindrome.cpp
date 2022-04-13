#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();//to clear buffer input i.e.,clear temporary data
    char arr[n];
    cin>>arr;
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Its a Palindrome"<<endl;
    }
    else{
        cout<<"Its not a Palindrome"<<endl;
    }

    return 0;
}