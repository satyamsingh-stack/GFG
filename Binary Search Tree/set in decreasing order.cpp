#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int,greater<int>> s;
	s.insert(23);
	s.insert(22);
	s.insert(34);
	s.insert(98);
	s.insert(22);
	for(auto x:s)
		cout<<x<<" ";
	return 0;
}
