#include<iostream>
using namespace std;
void snake(int **arr,int r,int c){
	for(int i=0;i<r;i++){
		if(i%2==0){
			for(int j=0;j<c;j++){
				cout<<arr[i][j]<<" ";
			}
		}
		else{
			for(int j=c-1;j>=0;j--){
				cout<<arr[i][j]<<" ";
			}
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
	snake(arr,r,c);
	return 0;
}
