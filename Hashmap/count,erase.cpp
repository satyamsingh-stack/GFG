#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	unordered_set <int> s;
	s.insert(1);
	s.insert(2);
	s.insert(4);
	s.insert(5);
	if(s.count(1)==0)
		cout<<"Not Found"<<endl;
	else
		cout<<"Found"<<endl;
	s.erase(s.begin(),s.end());
	cout<<s.size();
	return 0;
}
