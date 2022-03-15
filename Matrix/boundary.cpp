#include<iostream>
using namespace std;
void boundary_traverse(int **arr,int r,int c){
	if(r==1){
		for(int i=0;i<c;i++)
			cout<<arr[0][i]<<" ";
	}
	if(c==1){
		for(int i=0;i<r;i++)
			cout<<arr[i][0]<<" ";
	}
	else{
		for(int i=0;i<c;i++)
			cout<<arr[0][i]<<" ";
		for(int i=1;i<r;i++)
			cout<<arr[i][c-1]<<" ";
		for(int i=c-2;i>=0;i--)
			cout<<arr[r-1][i]<<" ";
		for(int i=r-2;i>=1;i--)
			cout<<arr[i][0]<<" ";
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
	boundary_traverse(arr,r,c);
	return 0;
}
