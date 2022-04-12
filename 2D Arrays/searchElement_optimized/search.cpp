#include<iostream>
using namespace std;

int main(){

    int m,n,target;
    cin>>m>>n>>target;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool found=false;
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(arr[r][c]==target){
            found=true;
            break;
        }
        else if(arr[r][c]<target){
            r++;
        }
        else{
            c--;
        }
    }
    if(found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element doesn't exist"<<endl;
    }
    return 0;
}