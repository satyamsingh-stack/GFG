#include<bits/stdc++.h>
using namespace std;
void count_distinct_element(int *arr,int k,int n){
	unordered_map<int,int> m;
	for(int i=0;i<k;i++)
		m[arr[i]]+=1;
	cout<<m.size()<<" ";
	for(int i=k;i<n;i++){
		m[arr[i-k]]-=1;
		if(m[arr[i-k]]==0)
			m.erase(arr[i-k]);
		m[arr[i]]+=1;
		cout<<m.size()<<" ";
	}
}
int main(){
	int arr[]={10,20,20,10,30,40,10},k=4;
	count_distinct_element(arr,k,7);
	return 0;
}
