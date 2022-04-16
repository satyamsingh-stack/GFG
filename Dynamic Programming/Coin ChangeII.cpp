#include<bits/stdc++.h>
using namespace std;
int coin_changeII(int coins[],int n,int sum){
	int t[n+1][sum+1];
	for(int i=1;i<=n;i++)
		t[i][0]=0;
	for(int i=0;i<=sum;i++)
		t[0][i]=INT_MAX-1;
	for(int j=1;j<=sum;j++){
		if(j%coins[0]==0)
			t[1][j]=j/coins[0];
		else
			t[1][j]=INT_MAX-1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(coins[i-1]<=j)
				t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];
}
int main(){
	int coins[]={1,2,3};
	int sum=5;
	int n=sizeof(coins)/sizeof(coins[0]);
	cout<<coin_changeII(coins,n,sum);
	return 0;
}
