#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cumSum[n], sum=0;
    for(int i=0;i<n;i++){
        cumSum[i]=sum+arr[i];
        sum=cumSum[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<i;j++){
            sum=cumSum[i]-cumSum[j];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}