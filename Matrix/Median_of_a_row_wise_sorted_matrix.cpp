//Time Complixity O(r*log(max-min)*logc)
#include<bits/stdc++.h>
using namespace std;
int matrix_median(int **arr,int r,int c){
	int min=arr[0][0],max=arr[0][c-1];
	for(int i=0;i<r;i++){
		if(arr[i][0]<min)
			min=arr[i][0];
		else if(arr[i][c-1]>max)
			max=arr[0][i];
	}
	int median=(r*c+1)/2;
	while(min<max){
		int mid=(max+min)/2;
		int midpos=0;
		for(int i=0;i<r;++i){
			midpos=midpos+upper_bound(arr[i],arr[i]+c,mid)-arr[i];
		}
		if(median>midpos)
			min=mid+1;
		else
			max=mid;
	}
	return min;
}
int main(){
	int r,c;
	cin>>r>>c;
	int **arr;
	arr=new int*[r];
	for(int i=0;i<r;i++)
		arr[i]=new int[c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	}
	cout<<matrix_median(arr,r,c);
	return 0;
}
