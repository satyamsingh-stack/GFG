#include<iostream>
using namespace std;
void leader(int *arr,int n){
	int curr_lea=arr[n-1];
	cout<<curr_lea<<" ";
	for(int i=n-2;i>=0;i--){
		if(curr_lea<arr[i]){
			curr_lea=arr[i];
			cout<<curr_lea<<" ";
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
	leader(arr,n);
	return 0;
}
