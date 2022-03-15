#include<iostream>
#include<vector>
using namespace std;
void traverse(vector<int> arr[],int r,int c){
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
	vector<int> arr[r];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr[i].push_back(10);
		}
	}
	traverse(arr,r,c);
	return 0;
}
