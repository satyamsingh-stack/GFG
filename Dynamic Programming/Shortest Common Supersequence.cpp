#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y,int m,int n){
	int t[m+1][n+1];
	for(int i=0;i<=m;i++)
		t[i][0]=0;
	for(int i=1;i<=n;i++)
		t[0][i]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(x[i-1]==y[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	return t[m][n];
}
int shortest_common_supersequence(string x,string y,int m,int n){
	int a=m+n;
	int b=LCS(x,y,m,n);
	return a-b;
}
int main(){
	string x,y;
	cin>>x>>y;
	int n,m;
	m=x.length();
	n=y.length();
	cout<<shortest_common_supersequence(x,y,m,n);
	return 0;
}
