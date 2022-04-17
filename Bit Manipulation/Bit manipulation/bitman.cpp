#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return ((1<<pos)&n)!=0;
}

int setBit(int n,int pos){
    return ((1<<pos)|n);
}

int clearBit(int n,int pos){
    int mask=~(1<<pos);
    return mask&n;
}
int updateBit(int n,int pos,int val){
    n=clearBit(n,pos);
    return n|(val<<pos);
}

int toggleBit(int n,int pos){
    return ((1<<pos) xor n);
}

int main(){

    int n,pos;
    cin>>n>>pos;
    cout<<getBit(n,pos)<<endl;
    cout<<setBit(n,pos)<<endl;
    cout<<clearBit(n,pos)<<endl;
    cout<<updateBit(n,pos,1)<<endl;
    cout<<toggleBit(n,pos)<<endl;
    return 0;
}