#include<iostream>
using namespace std;
void nextGreater(int *arr,int n){
	for(int i=0;i<n;i++){
		int j;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				cout<<arr[j]<<" ";
				break;
			}
		}
		if(j==n){
			cout<<-1<<" ";
		}
	}
}
int main(){
	int arr[8]={5,15,10,8,6,12,9,18},n=8;
	nextGreater(arr,n);
	return 0;
}
