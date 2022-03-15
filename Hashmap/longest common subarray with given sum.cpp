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
int common_subarray(int *arr1,int *arr2,int n){
	int temp[n];
	for(int i=0;i<n;i++)
		temp[i]=arr1[i]-arr2[i];
	longest_subarray(temp,0,n);
}
int main(){
	int arr1[]={0,1,0,1,1,1,1};
	int arr2[]={1,1,1,1,1,0,1};
	cout<<common_subarray(arr1,arr2,7);
	return 0;
}
