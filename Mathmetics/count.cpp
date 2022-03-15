#include<iostream>
using namespace std;
int num(int n){
	int c=0;
	while(n!=0){
		n=n/10;
		c++;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<num(n)<<endl;
	return 0;
}
