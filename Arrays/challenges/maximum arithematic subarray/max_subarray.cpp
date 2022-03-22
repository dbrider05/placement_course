#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=a[1]-a[0];
    int curr=2;
    int ans=2;
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]==d){
            curr++;
            ans=max(ans,curr);
        }
        else{
            d=a[i]-a[i-1];
            curr=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}