#include<iostream>
using namespace std;
void rotateby90(int **arr,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=i+1;j<r;j++)
			swap(arr[i][j],arr[j][i]);
	}
	for(int i=0;i<r;i++){
		int beg=0,end=r-1;
		while(beg<end){
			swap(arr[beg][i],arr[end][i]);
			beg++;
			end--;
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
	rotateby90(arr,r,c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
