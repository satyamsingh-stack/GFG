#include<bits/stdc++.h>
using namespace std;
int lcs1(string x,string y,int n,int m){
	int t[n+1][m+1];
	int count=0;
	for(int i=0;i<=n;i++)
		t[i][0]=0;
	for(int i=1;i<=m;i++)
		t[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i-1]==y[j-1]){
				t[i][j]=1+t[i-1][j-1];
				count=max(count,t[i][j]);
			}
			else
				t[i][j]=0;
		}
	}
	return count;
}
int main(){
	string x,y;
	cin>>x>>y;
	int n=x.length();
	int m=y.length();
	cout<<lcs1(x,y,n,m);
	return 0;
}
