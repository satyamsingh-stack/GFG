#include<iostream>
using namespace std;
int maxsum(int *arr,int n){
	int maxending=arr[0],res=arr[0];
	for(int i=1;i<n;i++){
		maxending=max(maxending+arr[i],arr[i]);
		res=max(maxending,res);
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<maxsum(arr,n);
	return 0;
}
