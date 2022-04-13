#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();//to clear buffer
    char arr[n+1];
    cin.getline(arr,n);
    int maxLength=0,currLength=0;
    int maxst_idx=0,st_idx=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currLength>maxLength){
                maxLength=currLength;
                maxst_idx=st_idx;
            }
            st_idx=i+1;
            currLength=0;
            
        }
        else 
            currLength++;
        
    }
    cout<<maxLength<<endl;
    for(int i=maxst_idx;i<maxst_idx+maxLength;i++){
        cout<<arr[i];
    }
    // for(int i=0;i<maxLength;i++){
    //     cout<<arr[maxst_idx+i];
    // }
    cout<<endl;
    return 0;
}