#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
	if(s.size()==0 || s.top()<=temp){
		s.push(temp);
		return ;
	}
	else{
		int val=s.top();
		s.pop();
		insert(s,temp);
		s.push(val);
	}
}
void mysort(stack<int> &s){
	if(s.size()==0)
		return ;
	int temp=s.top();
	s.pop();
	mysort(s);
	insert(s,temp);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	stack<int> s;
	for(int i=0;i<n;i++){
		s.push(arr[i]);
	}
	mysort(s);
	while(s.empty()==false){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
