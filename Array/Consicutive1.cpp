#include<iostream>
using namespace std;
int cons(int *arr,int n){
	int res=0,curr;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			curr=0;
		}
		else{
			curr++;
			res=max(curr,res);
		}
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=cons(arr,n);
	cout<<ans<<endl;
	return 0;
}
