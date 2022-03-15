#include<iostream>
using namespace std;
const int r=2;
const int c=2;
void traverse(int arr[][c],int r){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int arr[r][c]={{1,2}, {3,4}};
	traverse(arr,r);
	return 0;
}
