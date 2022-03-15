#include<iostream>
using namespace std;
void traverse(int **arr,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int r,c;
	cin>>r>>c;
	int **arr;
	arr=new int*[r];
	for(int i=0;i<r;i++){
		arr[i]=new int[c];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	traverse(arr,r,c);
	return 0;
}
