#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	cout<<s.count(10)<<endl;
	s.erase(10);
	cout<<s.count(10);
	return 0;
}
