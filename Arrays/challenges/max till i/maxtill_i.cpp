#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_element=INT_MIN;
    for(int i=0;i<n;i++){
        max_element = max(max_element,arr[i]);
        cout<<max_element<<endl;
    }
    return 0;
}