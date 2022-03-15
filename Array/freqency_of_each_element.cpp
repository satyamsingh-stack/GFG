/*This is applicable only for sorted array.
for unsorted array we have to sort the array first
the apply frequency function*/
#include<iostream>
//#include<algorithm>
using namespace std;
void frequency(int *arr,int n){
	int fre=1,i=1;
//	sort(arr,n+arr);
	while(i<n){
		while(i<n && arr[i-1]==arr[i]){
			fre++;
			i++;
		}
		cout<<arr[i-1]<<" "<<fre<<endl;
		i++;
		fre=1;
	}
	if(n==1 || arr[n-1]!=arr[n-2])
		cout<<arr[n-1]<<" "<<1<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	frequency(arr,n);
	return 0;
}
