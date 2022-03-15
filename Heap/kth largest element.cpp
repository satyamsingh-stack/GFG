#include<bits/stdc++.h>
using namespace std;
int solution(int *arr,int n,int k){
	priority_queue<int,vector<int>,greater<int>> minheap;
	for(int i=0;i<k;i++)
		minheap.push(arr[i]);
	for(int i=k;i<n;i++){
		if(minheap.top()>arr[i])
			continue;
		else{
			minheap.pop();
			minheap.push(arr[i]);
		}
	}
	return minheap.top();
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<solution(arr,n,k);
	return 0;
}
