//Time O(R*C)
#include<iostream>
using namespace std;
void search(int **arr,int r,int c,int x){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]==x){
				cout<<"Found at index : "<<i<<" "<<j;
				return ;
			}
		}
	}
	cout<<"Not Found"<<endl;
}
int main(){
	int r,c,x;
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
	cin>>x;
	search(arr,r,c,x);
	return 0;
}
