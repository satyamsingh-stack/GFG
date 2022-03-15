#include<iostream>
using namespace std;
void spiral_matrix(int **arr,int r,int c){
	int top=0,left=0,right=c-1,bottom=r-1;
	while(top<=bottom && left<=right){
		for(int i=left;i<=right;i++)
			cout<<arr[top][i]<<" ";            //print top row
		top++;
		for(int i=top;i<=bottom;i++)
			cout<<arr[i][right]<<" ";          //print right column
		right--;
		if(top<=bottom){
			for(int i=right;i>=left;i--)
				cout<<arr[bottom][i]<<" ";       //print left column
			bottom--;
		}
		else if(left<=right){
			for(int i=bottom;i>=top;i--)
				cout<<arr[i][left]<<" ";        //print bottom row
			left++;
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
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	}
	spiral_matrix(arr,r,c);
	return 0;
}
