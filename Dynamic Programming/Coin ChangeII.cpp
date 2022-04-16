#include<bits/stdc++.h>
using namespace std;
int coin_change(int coins[],int amount,int n){
	int t[n+1][amount+1];
	for(int i=0;i<=n;i++)
		t[i][0]=1;
	for(int i=1;i<=amount;i++)
		t[0][i]=INT_MAX-1;
	for(int j=1;j<=amount;j++){
		if(j%coins[0]==0)
			t[1][j]=j/coins[0];
		else
			t[1][j]=INT_MAX-1;
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=amount;j++){
			if(coins[i-1]<=j)
				t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][amount];
}
int main(){
	int coins[]={1,2,5};
	int amount=11;
	int n=sizeof(coins)/sizeof(coins[0]);
	cout<<coin_change(coins,amount,n);
  return 0;
}
