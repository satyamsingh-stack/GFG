#include<iostream>
using namespace std;
void transpose(int **arr,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=i+1;j<r;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
}
int main(){
	int r,c;
	cin>>r>>c;
	int **arr;
	arr=new int*[r];
	for(int i=0;i<r;i++)
		arr[i]=new int[c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	transpose(arr,r,c);
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
