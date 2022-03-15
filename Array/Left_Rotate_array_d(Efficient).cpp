//Time O(n)
#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int *arr,int beg,int end){
	while(beg<end){
		swap(arr[beg],arr[end]);
		beg++;
		end--;
	}
}
int rotate_by_d(int *arr,int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
	return n;
}
int main(){
	int n;
	cin>>n;
	int arr[n],ans,d;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>d;
	ans=rotate_by_d(arr,n,d);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
