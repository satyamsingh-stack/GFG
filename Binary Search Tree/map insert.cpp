#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> m;
	m.insert({1,100});
	m.insert({2,200});
	m[3]=400;
	for(auto x:m)
		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}
