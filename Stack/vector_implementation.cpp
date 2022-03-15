#include<bits/stdc++.h>
using namespace std;
struct mystack{
	vector <int> v;
	void push(int x){
		v.push_back(x);
	}
	int pop(){
		int res=v.back();
		v.pop_back();
		return res;
	}
	int peek(){
		return v.back();
	}
	bool isempty(){
		return v.empty();
	}
	int size(){
		return v.size();
	}
};
int main(){
	mystack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<"Top Iteam is : "<<s.peek()<<endl;
	s.pop();
	cout<<"Deleted Iteam is : "<<s.pop()<<endl;
	s.push(5);
	cout<<"Top Element is : "<<s.peek()<<endl;
	cout<<"Size of Stack is : "<<s.size()<<endl;
	cout<<"Isempty "<<s.isempty()<<endl;
	return 0;
}
