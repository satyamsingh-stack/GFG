#include<iostream>
using namespace std;
int normalMaxsum(int *arr,int n){
	int maxending=arr[0],res=arr[0];
	for(int i=1;i<n;i++){
		maxending=(arr[i],arr[i]+maxending);
		res=max(res,maxending);
	}
	return res;
}
int overall_maxsum(int *arr,int n){
	int normal_max=normalMaxsum(arr,n);
	if(normal_max<0)
		return normal_max;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		arr[i]=-arr[i];
	}
	int circular_max=sum+normalMaxsum(arr,n);
	return max(normal_max,circular_max);
}
int main(){
	int arr[]={1,-2,3,-4,10},n=5;
	cout<<overall_maxsum(arr,n);
	return 0;
}
