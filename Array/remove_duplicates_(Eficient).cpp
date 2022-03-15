//O(1) space and O(N) Time
#include<iostream>
using namespace std;
int removedups(int *arr,int n){
	int res=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[res-1]){
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=removedups(arr,n);
	for(int i=0;i<ans;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
