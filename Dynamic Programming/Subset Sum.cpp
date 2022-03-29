#include<bits/stdc++.h>
using namespace std;
bool solution(int arr[],int n,int sum){
	bool t[n+1][sum+1];
	for(int i=0;i<=n;i++)
		t[i][0]=true;
	for(int i=1;i<=sum;i++)
		t[0][i]=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j)
				t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
			else if(arr[i-1]>j)
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int main(){
	int arr[]={1,4};
	int sum=5;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<solution(arr,n,sum);
	return 0;
}
