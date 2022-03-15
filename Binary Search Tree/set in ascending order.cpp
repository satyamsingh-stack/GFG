#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(2);
	s.insert(1);
	s.insert(2);
	s.insert(87);
	s.insert(76);
	for(auto i=s.begin();i!=s.end();i++)
		cout<<*i<<" ";
	return 0;
}
