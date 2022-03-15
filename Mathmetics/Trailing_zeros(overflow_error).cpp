#include<iostream>
using namespace std;
int Trailing(int n){
	int f=1;
	for(int i=2;i<=n;i++){
		f=f*i;
	}
	int c=0;
	while(f%10==0){
		c++;
		f=f/10;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<Trailing(n)<<endl;
	return 0;
}
