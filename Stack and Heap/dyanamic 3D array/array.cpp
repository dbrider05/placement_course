#include<iostream>
using namespace std;

int main(){

    int x,y,z,ctr=0;
    cin>>x>>y>>z;
    cin.ignore();
    int ***a=new int**[x];
    for(int i=0;i<x;i++){
        a[i]=new int*[y];
        for(int j=0;j<y;j++){
            a[i][j]=new int[z];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                a[i][j][k]=ctr++;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                cout<<a[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            delete []a[i][j];
        }
        delete []a[i];
    }
    delete []a;
    return 0;
}