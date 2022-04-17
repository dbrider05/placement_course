#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    char ans[str.size()];
    ans[0]=str[0];
    int ctr=1;
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i-1]){
            ans[ctr++]=str[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}