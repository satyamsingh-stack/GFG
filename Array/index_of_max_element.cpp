#include<iostream>
using namespace std;
int max_element(int *arr,int n){
	int max=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[max])
			max=i;
	}
	return max;
}
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Index of max Element is : "<<max_element(arr,n)<<endl;	
	return 0;
}	
