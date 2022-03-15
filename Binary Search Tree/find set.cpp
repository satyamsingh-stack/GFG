#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(10);
	s.insert(29);
	s.insert(12);
	auto it=s.find(12);
	if(it==s.end())
		cout<<"Not Found";
	else
		cout<<"Found";
	return 0;
}
