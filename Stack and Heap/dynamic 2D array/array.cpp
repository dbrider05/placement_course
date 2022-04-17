#include<iostream>
using namespace std;

int main(){

    int m,n,ctr=0;
    cin>>m>>n;
    int **a=new int*[m];
    for(int i=0;i<m;i++){
        *(a+i)=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=ctr++;
        }
    }
    // int *a=new int[m*n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         *(a+i*n+j)=ctr++;
    //     }    
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<*(a+i*n+j)<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<m;i++)
        delete[] a[i];
    delete[] a;
    return 0;
}