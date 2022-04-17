#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    //to uppercase 
    for(int i=0;i<str.size();i++){
        if(str[i]>='a'||str[i]<='z')
            str[i]-=32;
    }
    cout<<str<<endl;
    //to lowercase
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'||str[i]<='Z')
            str[i]+=32;
    }
    cout<<str<<endl;
    //another algo
    transform(str.begin(),str.end(),str.begin(),::toupper);
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    
    return 0;
}