// Coin Change Problem Maximum Number of ways
// Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
// Example:
// for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.


#include<bits/stdc++.h>
using namespace std;
int coin_sum(int coin[],int sum,int n){
	int t[n+1][sum+1];
	for(int i=0;i<=n;i++)
		t[i][0]=1;
	for(int i=1;i<=sum;i++)
		t[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(coin[i-1]<=j)
				t[i][j]=t[i][j-coin[i-1]]+t[i-1][j];
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int main(){
	int coin[]={1,2,3};
	int sum=5;
	int n=sizeof(coin)/sizeof(coin[0]);
	cout<<coin_sum(coin,sum,n);
	return 0;
}
