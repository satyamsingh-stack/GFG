#include<iostream>
using namespace std;
int num(int n){
	if(n==0)
		return 0;
	else
		return 1+num(n/10);
}
int main(){
	int n;
	cin>>n;
	cout<<num(n)<<endl;
	return 0;
}
