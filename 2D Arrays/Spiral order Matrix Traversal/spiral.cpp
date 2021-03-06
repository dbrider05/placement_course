#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        //first row
        for(int k=col_start;k<=col_end;k++){
            cout<<arr[row_start][k]<<" ";
        }
        row_start++;
        //last column
        for(int k=row_start;k<=row_end;k++){
            cout<<arr[k][col_end]<<" ";
        }
        col_end--;
        //last row
		if(row_start<=row_end){
			for(int k=col_end;k>=col_start;k--){
				cout<<arr[row_end][k]<<" ";
			}
			row_end--;
		}
        //first column
		if(col_start<=col_end){
			for(int k=row_end;k>=row_start;k--){
				cout<<arr[k][col_start]<<" ";
			}
			col_start++;
		}
    }
    return 0;
}