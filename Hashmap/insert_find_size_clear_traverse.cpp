#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	unordered_set <int> s;
	s.insert(4);
	s.insert(5);
	s.insert(6);
	s.insert(7);
	if(s.find(5)==s.end())            //end() pointer indicates the next of last pointer
		cout<<"Not Found"<<endl;
	else
		cout<<"Found"<<endl;
	for(auto i=s.begin();i!=s.end();i++)	//auto is used to intialize the expression which involves tamplates,pointer to dunction.
		cout<<*i<<" ";
	cout<<endl;
	cout<<s.size()<<endl;
	s.clear();
	cout<<s.size();
	return 0;
}
