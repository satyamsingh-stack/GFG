#include<bits/stdc++.h>
using namespace std;
struct mystack{
	int *arr;
	int cap;
	int top;
	mystack(int c){
		cap=c;
		arr=new int[cap];
		top=-1;
	}
	void push(int x){
		if(top==cap-1){
			cout<<"Overflow"<<endl;
		}
		top++;
		arr[top]=x;
	}
	int peek(){
		if(top==-1)
			cout<<"Stack is Empty"<<endl;
		return arr[top];
	}
	int pop(){
		if(top==-1)
			cout<<"Underflow"<<endl;
		int res=arr[top];
		top--;
		return res;
	}
	int size(){
		return top+1;
	}
	bool isempty(){
		return top==-1;
	}
};
int main(){
	mystack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<"Top Element is : "<<s.peek()<<endl;
	s.pop();
	cout<<"Deleted Element is : "<<s.pop()<<endl;
	cout<<"Top Element is : "<<s.peek()<<endl;
	cout<<"Size of Stack is : "<<s.size()<<endl;
	cout<<"Empty or Not "<<s.isempty()<<endl;
	return 0;
}
