#include<iostream>
using namespace std;

int equalSumXOR(int n){
    int unset_bits=0;
    while(n){
        if((n&1)==0){
            unset_bits++;
        }
        n=n>>1;
    }
    return 1<<unset_bits;
}

int main(){

    int n;
    cin>>n;
    cout<<equalSumXOR(n)<<endl;
    return 0;
}