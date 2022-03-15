#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
	if(b==0)
		return a;
	return hcf(b,a%b);
}
int main(){
	int t,b,c;
	cin>>t;
	while(t--){
		cin>>b>>c;
		cout<<c/hcf(b,c)<<endl;
	}
	return 0;
}
