#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y,int n,int m){
	int t[n+1][m+1];
	for(int i=0;i<=n;i++)
		t[i][0]=0;
	for(int i=1;i<=m;i++)
		t[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i-1]==y[i-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	return t[n][m];
}
int main(){
	string x,y;
	cin>>x>>y;
	int n=x.length();
	int m=y.length();
	cout<<LCS(x,y,n,m);
	return 0;
}
