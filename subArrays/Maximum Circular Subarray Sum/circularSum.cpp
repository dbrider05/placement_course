#include<iostream>

using namespace std;

int kadaneAlgo(int arr[],int n){
    int currentSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int totalSum=0,wrapsum,nonwrapsum;
    nonwrapsum=kadaneAlgo(arr,n);
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalSum+kadaneAlgo(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}