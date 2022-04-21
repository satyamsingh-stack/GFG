#include<bits/stdc++.h>
using namespace std;
int LCS(string a,string b,int m,int n){
	int t[m+1][n+1];
	for(int i=0;i<=m;i++)
		t[i][0]=0;
	for(int j=1;j<=n;j++)
		t[0][j]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i-1]==b[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	return t[m][n];
}
int minimum_deletion(string a,string b,int m,int n){
	int ans=LCS(a,b,m,n);
	return a.length()-ans;
}
int main(){
	string a,b;
	cin>>a;
	b=a;
	reverse(b.begin(),b.end());
	cout<<minimum_deletion(a,b,a.size(),a.size());
	return 0;
}
