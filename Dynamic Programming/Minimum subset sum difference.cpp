#include<bits/stdc++.h>
using namespace std;
vector<int> subset_sum(int arr[],int range,int n){
	int t[n+1][range+1];
	vector<int> v;
	for(int i=0;i<=n;i++)
		t[i][0]=true;
	for(int i=1;i<=range;i++)
		t[0][i]=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=range;j++){
			if(arr[i-1]<=j)
				t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
			else if(arr[i-1]>j)
				t[i][j]=t[i-1][j];
		}
	}
	for(int j=0;j<=range/2;j++){
		if(t[n][j]==true)
			v.push_back(j);
	}
	return v;
}
int minimize_diff(vector<int> v,int range){
	int mn=INT_MAX;
	for(int i=0;i<v.size();i++)
		mn=min(mn,range-2*v[i]);
	return mn;
}
int main(){
	int arr[]={1,6,11,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int range=0;
	for(int i=0;i<n;i++)
		range=range+arr[i];
	vector<int> ans;
	ans=subset_sum(arr,range,n);
	cout<<minimize_diff(ans,range);
	return 0;
}
