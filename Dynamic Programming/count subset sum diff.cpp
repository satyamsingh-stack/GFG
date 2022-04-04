#include<bits/stdc++.h>
using namespace std;
int count_subset_sum(int arr[],int n,int sum){
	int t[n+1][sum+1];
	for(int i=0;i<=n;i++)
		t[i][0]=true;
	for(int i=1;i<=sum;i++)
		t[0][i]=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j)
				t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
			else if(arr[i-1]>j)
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int main(){
	int arr[]={1,1,2,3};
	int diff=1;
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum_s1,sum_arr=0;
	for(int i=0;i<n;i++)
		sum_arr=sum_arr+arr[i];
	sum_s1=(sum_arr+diff)/2;
	cout<<count_subset_sum(arr,n,sum_s1);
	return 0;
}
