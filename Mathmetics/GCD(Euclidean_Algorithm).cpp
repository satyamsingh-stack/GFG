#include<iostream>
using namespace std;
int GCD(int a,int b){
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b)<<endl;
	return 0;
}
