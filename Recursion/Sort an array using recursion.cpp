#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp){
	if(v.size()==0 || v[v.size()-1]<=temp){
		v.push_back(temp);
		return ;
	}
	else{
		int val=v[v.size()-1];
		v.pop_back();
		insert(v,temp);
		v.push_back(val);
	}
}
void mysort(vector<int> &v){
	if(v.size()==0)
		return ;
	int temp=v[v.size()-1];
	v.pop_back();
	mysort(v);
	insert(v,temp);
}
int main(){
	int x;
	vector<int> v;
	for(int i=0;i<4;i++){
		cin>>x;
		v.push_back(x);
	}
	mysort(v);
	for(int i=0;i<4;i++)
		cout<<v[i]<<" ";
	return 0;
}
