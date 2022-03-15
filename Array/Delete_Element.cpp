#include<iostream>
#include<cmath>
using namespace std;
int deletion(int *arr,int key,int n){
	int i=0;
	for(i=0;i<n;i++){
		if(arr[i]==key)
			break;
	}
	if(i==n)
		return n;
	for(int j=i;j<n-1;j++)
		arr[j]=arr[j+1];
	return n-1;
}
int main(){
	int arr[5]={1,2,3,4,5},key,n=5;
	cout<<"Intially Linkedlist is : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"Enter Element Which is to be Delete : ";
	cin>>key;
	n=deletion(arr,key,n);
	cout<<"After Deletion Array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
