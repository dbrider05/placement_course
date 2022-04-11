#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                found=true;
                break;
            }
        }
    }
    if(found){
        cout<<"Element is present"<<endl;
    }
    else
        cout<<"Sorry! Element is not present"<<endl;
    return 0;
}