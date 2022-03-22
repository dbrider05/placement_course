#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=-1;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    int ans=0,prev_mx=-1;
    for(int i=0;i<n;i++){
        if(prev_mx<arr[i] && arr[i]>arr[i+1]){
            ans++;
        }
        prev_mx = max(arr[i],prev_mx);
    }
    cout<<ans<<endl;
    return 0;
}