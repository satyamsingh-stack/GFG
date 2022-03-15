#include<bits/stdc++.h>
using namespace std;
vector<int> previousgreater(int *arr,int n){
	vector<int> v;
	stack<int> s;
	v.push_back(-1);
	s.push(arr[0]);
	for(int i=1;i<n;i++){
		while(s.empty()==false && arr[i]>=s.top())
			s.pop();
		int gre=s.empty()? -1:s.top();
		v.push_back(gre);
		s.push(arr[i]);
	}
	return v;
}
int main(){
	int arr[]={15,10,18,12,4,6,2,8},n=sizeof(arr)/sizeof(arr[0]);
	for(int x: previousgreater(arr,n))
		cout<<x<<" ";
	return 0;
}
