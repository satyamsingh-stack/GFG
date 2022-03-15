#include<bits/stdc++.h>
using namespace std;
int result(string st1,string st2){
	unordered_set<char> s(st1.begin(),st1.end());
	int res=0;
	for(char i: st2){
		if(s.count(i))
			res++;
	}
	return res;
}
int main(){
	string st1,st2;
	cin>>st1;
	cin>>st2;
	cout<<result(st1,st2);
	return 0;
}
