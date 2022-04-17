#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    int maxFreq=INT_MIN;
    char ans;
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxFreq<<" "<<ans<<endl;
    return 0;
}