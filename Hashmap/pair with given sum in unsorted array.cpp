#include<bits/stdc++.h>
using namespace std;
bool pair_with_given_sum(int *arr,int n,int s){
	unordered_set<int> h;
	for(int i=0;i<n;i++){
		if(h.find(s-arr[i])!=h.end())
			return true;
		else
			h.insert(arr[i]);
	}
	return false;
}
int main(){
	int arr[]={8,3,4,2,5};
	int s=6;
	cout<<pair_with_given_sum(arr,5,s);
	return 0;
}
