// Time complexity of this solution is O(n + kLogn).



#include<bits/stdc++.h>
using namespace std;
int solution(int *arr,int n,int k){
	priority_queue<int,vector<int>> maxheap;
	for(int i=0;i<k;i++)
		maxheap.push(arr[i]);
	for(int i=k;i<n;i++){
		if(maxheap.top()<arr[i])
			continue;
		else{
			maxheap.pop();
			maxheap.push(arr[i]);
		}
	} 
	return maxheap.top();
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
