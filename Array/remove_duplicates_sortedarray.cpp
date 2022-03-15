#include<iostream>
using namespace std;
int remove(int *arr,int n){
	int temp[n],i,res=1;
	temp[0]=arr[0];
	for(i=1;i<n;i++){
		if(temp[res-1]!=arr[i]){
			temp[res]=arr[i];
			res++;
		}
	}
	for(i=0;i<res;i++){
		arr[i]=temp[i];
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
	int ans=remove(arr,n);
	for(int i=0;i<ans;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
