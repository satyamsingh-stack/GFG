#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int,greater<int>> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);
	for(auto i=s.rbegin();i!=s.rend();i++)
		cout<<*i<<" ";
	return 0;
	
	
	
	//rbegin pointing to last element
	//rend point to begining of start element
}
