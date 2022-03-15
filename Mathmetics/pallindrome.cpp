#include<iostream>
using namespace std;
int pallindrome(int n){
	int k,r,s=0;
	k=n;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==k)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	cin>>n;
	if(pallindrome(n))
		cout<<"Pallindrome"<<endl;
	else
		cout<<"Not A Pallindrome"<<endl;
	return 0;
}
