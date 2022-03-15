#include<iostream>
using namespace std;
#include<stack>
int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	while(s.empty()==false){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
