#include<bits/stdc++.h>
using namespace std;
void freq(string st){
	unordered_map<char,int> m;
	for(int i=0;i<st.length();i++)
		m[st[i]]++;
	for(auto x:m)
		cout<<x.first<<" "<<x.second<<endl;
}
int main(){
	string st;
	getline(cin,st);
	freq(st);
	return 0;
}
