#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int *arr,int s,int n){
	unordered_map<int,int> m;
	int pre_sum=0,res=0;
	for(int i=0;i<n;i++){
		pre_sum+=arr[i];
		if(m.find(pre_sum-s)!=m.end())
			res=max(res,i-m[pre_sum-s]);
		if(m.find(pre_sum-s)==m.end())
			m.insert({pre_sum,i});
		if(pre_sum==s)
			res=i+1;
	}
	return res;
}
int equalnoof01(int *arr,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==0)
			arr[i]=-1;
	}
	longest_subarray(arr,0,n);
}
int main(){
	int arr[]={1,0,1,1,1,0,0};
	cout<<equalnoof01(arr,7);
	return 0;
}
