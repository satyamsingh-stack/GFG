#include<iostream>
using namespace std;
int reverse(int *arr,int beg,int end){
	while(beg<end){
		swap(arr[beg],arr[end]);
		beg++;
		end--;
	}
}
void rotate(int *arr,int d,int n){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	rotate(arr,3,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
