#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(5);
	s.insert(20);
	s.insert(10);
	auto it=s.upper_bound(5);
	if(it!=s.end())
		cout<<*it<<endl;
	else
		cout<<"Given Element is Greater than the largest element";
	return 0;
}
