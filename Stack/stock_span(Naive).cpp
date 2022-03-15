//Time O(n*n)
#include<iostream>
using namespace std;
void stock_span(int *arr,int n){
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i-1;j>=0;j--){
			if(arr[i]>=arr[j])
				count++;
		}
		cout<<count<<" ";
	}
}
int main(){
	int arr[10]={13,15,12,14,16,8,6,4,10,30},n=10;
	stock_span(arr,n);
	return 0;
}
