//Time Complixity = O(n)
#include<bits/stdc++.h>
using namespace std;
int insert(int *arr,int n,int key,int pos,int cap){
	int i;
	if(cap==n)
		return n;
	int indx=pos-1;
	for(int i=n-1;i>=indx;i--)
		arr[i+1]=arr[i];
	arr[indx]=key;
	return n+1;
}
int main(){
	int arr[5]={1,2,3},cap=3,pos,key,n=5;
	cout<<"Before Insertion Array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter Position Where you Want to Insert Element : ";
	cin>>pos;
	cout<<"Enter Key Which You want to insert : ";
	cin>>key;
	int res=insert(arr,n,key,pos,cap);
	cout<<"After Insertion Array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
