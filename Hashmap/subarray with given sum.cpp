#include<bits/stdc++.h>
using namespace std;
bool subarray_with_given_sum(int *arr,int n,int s){
	unordered_set<int> h;
	int pre_sum=0;
	for(int i=0;i<n;i++){
		pre_sum+=arr[i];
		if(h.find(pre_sum-s)!=h.end())
			return true;
		if(pre_sum==s)
			return true;
		else
			h.insert(pre_sum);
	}
	return false;
}
int main(){
	int arr[]={5,8,6,13,3,-1};
	int s=22;
	cout<<subarray_with_given_sum(arr,6,s);
	return 0;
}
