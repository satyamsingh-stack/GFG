#include<iostream>
using namespace std;
int zero_to_end(int *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			int temp=arr[i];
			arr[i]=arr[count];
			arr[count]=temp;
			count++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=zero_to_end(arr,n);
	for(int i=0;i<ans;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
