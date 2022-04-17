#include<iostream>
using namespace std;

int computeXOR(int n){
    if(n%4==0){
        return n;
    }
    else if(n%4==1){
        return 1;
    }
    else if(n%4==2){
        return n+1;
    }
    else {
        return 0;
    }

}

int main(){
    int n;
    cin>>n;
    //efficient method
    cout<<computeXOR(n)<<endl;
    return 0;
}