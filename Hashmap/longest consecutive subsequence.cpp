#include<bits/stdc++.h>
using namespace std;
int longest_consecutive_subsequence(int *arr,int n){
	unordered_set<int> m(arr,arr+n);
	int res=0;
	for(auto x:m){
		if(m.find(x-1)==m.end()){
			int curr=1;
			while(m.find(x+curr)!=m.end())
				curr++;
			res=max(res,curr);
		}
	}
	return res;
}
int main(){
	int arr[]={1,9,3,4,2,20};
	cout<<longest_consecutive_subsequence(arr,6);
	return 0;
}
