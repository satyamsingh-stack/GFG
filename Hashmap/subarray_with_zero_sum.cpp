#include<bits/stdc++.h>
using namespace std;
bool subarray_with_zero_sum(int *arr,int n){
	unordered_set<int> s;
	int pre_sum=0;
	for(int i=0;i<n;i++){
		pre_sum+=arr[i];
		if(s.find(pre_sum)!=s.end())
			return true;
		if(pre_sum==0)
			return true;
		else
			s.insert(pre_sum);
	}
	return false;
}
int main(){
	int arr[]={5,6,0,8};
	cout<<subarray_with_zero_sum(arr,4);
	return 0;
}
