// Rod Cutting Problem
//  Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the  maximum value obtainable by cutting up the rod and selling the pieces. 
// Example: 
// if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)


// length   | 1   2   3   4   5   6   7   8  
// --------------------------------------------
// price    | 1   5   8   9  10  17  17  20



#include<bits/stdc++.h>
using namespace std;
int rod_cutting(int length[],int size,int price[],int n){
	int t[size+1][n+1];
	for(int i=0;i<=size;i++)
		t[i][0]=0;
	for(int i=1;i<=n;i++)
		t[0][i]=0;
	for(int i=1;i<=size;i++){
		for(int j=1;j<=n;j++){
			if(length[i-1]<=j)
				t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[size][n];
}
int main(){
	int length[]={1,2,3,4,5,6,7,8};
	int price[]={1,5,8,9,10,17,17,20};
	int size=sizeof(length)/sizeof(length[0]);
	int n=8;
	cout<<rod_cutting(length,size,price,n);
	return 0;
}
