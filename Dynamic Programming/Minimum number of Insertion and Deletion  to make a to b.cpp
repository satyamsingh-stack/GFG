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
				t[i][j]=max(t[i][j-1],t[i-1][j]);
		}
	}
	return t[m][n];
}
int insertion(string x,string y,int m,int n){
	int a=x.length()-LCS(x,y,m,n);
	return a;
}
int deletion(string x,string y,int m,int n){
	int b=y.length()-LCS(x,y,m,n);
  return b;
}
int main(){
	string x,y;
	cin>>x>>y;
	int m=x.length();
	int n=y.length();
	cout<<insertion(x,y,m,n)<<endl;
	cout<<deletion(x,y,m,n)<<endl;
	return 0;
}
