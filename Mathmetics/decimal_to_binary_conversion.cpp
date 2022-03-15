#include<iostream>
using namespace std;
int dtob(int n){
	if(n>1)
		dtob(n/2);
	cout<<n%2<<" ";
}
int main(){
	int n;
	cin>>n;
	dtob(n);
	return 0;
}
