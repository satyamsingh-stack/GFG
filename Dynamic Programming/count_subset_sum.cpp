#include<bits/stdc++.h>
using namespace std;
int count_sum(int arr[],int sum,int n){
	int t[n+1][sum+1];
	for(int i=0;i<=n;i++)
		t[i][0]=1;
	for(int i=1;i<=sum;i++)
		t[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j)
				t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
			else if(arr[i-1]>j)
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int main(){
	int arr[]={2,3,5,6,8,10};
	int sum=10;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<count_sum(arr,sum,n);
	return 0;
}
