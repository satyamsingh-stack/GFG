#include<iostream>
//Time Complixity is O(n)
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int beg=0,end=n-1;
	while(beg<end){
		int temp=arr[beg];
		arr[beg]=arr[end];
		arr[end]=temp;
		beg++;
		end--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
