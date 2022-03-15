//Time O(n*nLogn)
#include<iostream>
using namespace std;
bool isprime(int n){
	if(n==1)
		return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
void factor(int n){
	for(int i=2;i<=n;i++){
		if(isprime(i)){
			int x=i;
			while(n%x==0){
				cout<<i<<" ";
				x=x*i;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	factor(n);
	return 0;
}
