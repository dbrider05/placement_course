#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int a=1e6+2;
    bool check[a];
    for(int i=0;i<a;i++){
        check[i]=false;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    for(int i=0;i<a;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}