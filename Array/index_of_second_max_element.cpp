#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=0,second=-1;
	for(i=1;i<n;i++){
		if(arr[i]>arr[max]){
			second=max;
			max=i;
		}
		else if(arr[i]!=arr[max]){
			if(second==-1 || arr[i]>arr[second])
				second=i;
		}
	}
	cout<<"Index of Second Max Element is : "<<second<<endl;
	return 0;
}
