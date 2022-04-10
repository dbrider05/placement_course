#include<iostream>
using namespace std;

void pairsum(int arr[],int n,int k){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==k){
            cout<<start<<" "<<end<<endl;
            return;
        }
        else if(arr[start]+arr[end]<k){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"can't find any element equal to "<<k<<endl;
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pairsum(arr,n,k);
    return 0;
}