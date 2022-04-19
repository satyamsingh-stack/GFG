#include<bits/stdc++.h>
using namespace std;
string printlcs(string x,string y,int n,int m){
	int t[n+1][m+1];
	for(int i=0;i<=n;i++)
		t[i][0]=0;
	for(int i=1;i<=m;i++)
		t[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i-1]==y[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	string ans="";
	int i=n;
	int j=m;
	while(i>0 && j>0){
		if(x[i-1]==y[j-1]){
			ans.push_back(x[i-1]);
			i--;
			j--;
		}
		else{
			if(t[i-1][j]<t[i][j-1])
				j--;
			else
				i--;
		}
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
	string x,y;
	cin>>x>>y;
	int n,m;
	n=x.length();
	m=y.length();
	cout<<printlcs(x,y,n,m);
	return 0;
}
