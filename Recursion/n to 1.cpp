#include<bits/stdc++.h>
using namespace std;
void print(int n){
	if(n==1){
		cout<<1<<endl;
		return ;
	}
	cout<<n<<endl;
	print(n-1);
}
int main(){
	int n;
	cin>>n;
	print(n);
	return 0;
}
