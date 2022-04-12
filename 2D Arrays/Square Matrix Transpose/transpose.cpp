#include<iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            if(i!=j)
                swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<endl;
    //print 2D Array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}