//Time O(n*n)
#include<iostream>
using namespace std;
void previous(int *arr,int n){
	for(int i=0;i<n;i++){
		int j;
		for(j=i-1;j>=0;j--){
			if(arr[j]>arr[i]){
				cout<<arr[j]<<" ";
				break;
			}
		}
		if(j==-1)
			cout<<-1<<" ";
	}
}
int main(){
	int arr[5]={20,30,10,5,15},n=5;
	previous(arr,n);
	return 0;
}
