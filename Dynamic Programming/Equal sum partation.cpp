#include<bits/stdc++.h>
using namespace std;
bool subset_sum(int arr[],int n,int sum){
	int t[n+1][sum+1];
	for(int i=0;i<=n;i++)
		t[i][0]=true;
	for(int i=1;i<=sum;i++)
		t[0][i]=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j)
				t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
		}
	}
	return t[n][sum];
}
bool equal_sum(int arr[],int n){
	int s=0;
	for(int i=0;i<n;i++)
		s=s+arr[i];
	if(s%2!=0)
		return false;
	else
		return subset_sum(arr,n,s/2);
}
int main(){
	int arr[]={3,5,11,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<equal_sum(arr,n);
	return 0;
}
