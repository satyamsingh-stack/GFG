#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(12);
	s.insert(34);
	s.insert(4);
	cout<<s.size()<<endl;
	s.clear();
	cout<<s.size();
	return 0;
}
