#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int *arr,int s,int n){
	unordered_map<int,int> m;
	int res=0,pre_sum=0;
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
int main(){
	int arr[]={8,3,1,5,-6,6,2,2};
	int s=4;
	cout<<longest_subarray(arr,s,8);
	return 0;
}
