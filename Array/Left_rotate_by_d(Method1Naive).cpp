//Time O(nd), Space O(1)
#include<iostream>
using namespace std;
void rotateby1(int *arr,int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
int rotatebyd(int *arr,int n,int d){
	for(int i=0;i<d;i++){
		rotateby1(arr,n);
	}
	return n;
}
int main(){
	int n,d;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>d;
	int ans=rotatebyd(arr,n,d);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
