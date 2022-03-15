#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"Top Element is : "<<s.top()<<endl;
	s.pop();
	cout<<"Top Element is : "<<s.top()<<endl;
	cout<<"Size of the Element is : "<<s.size()<<endl;
	return 0;
}
