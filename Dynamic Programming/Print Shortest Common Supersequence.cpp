#include<bits/stdc++.h>
using namespace std;
string shortest_common_supersequence(string x,string y,int m,int n){
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
	string ans;
	int i=m,j=n;
	while(i>0 && j>0){
		if(x[i-1]==y[j-1]){
			ans.push_back(x[i-1]);
			i--;
			j--;
		}
		else{
			if(t[i-1][j]>t[i][j-1]){
				ans.push_back(x[i-1]);
				i--;
			}
			else if(t[i][j-1]>t[i-1][j]){
				ans.push_back(y[j-1]);
				j--;
			}
		}
	}
	while(i>0){
		ans.push_back(x[i-1]);
		i--;
	}
	while(j>0){
		ans.push_back(y[j-1]);
		j--;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
	string x,y;
	cin>>x>>y;
	int m=x.length();
	int n=y.length();
	cout<<shortest_common_supersequence(x,y,m,n);
	return 0;
}
