#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
struct mystack{
	Node *head;
	int sz;
	mystack(){
		head=NULL;
		sz=0;
	}
	void push(int x){
		Node *temp=new Node(x);
		temp->next=head;
		head=temp;
		sz++;
	}
	int pop(){
		int res=head->data;
		Node *temp=head;
		head=head->next;
		delete temp;
		sz--;
		return res;
	}
	int peek(){
		return head->data;
	}
	int size(){
		return sz;
	}
	bool isempty(){
		return head==NULL;
	}
};
int main(){
	mystack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<"Top Element is : "<<s.peek()<<endl;
	cout<<"Deleted Element is : "<<s.pop()<<endl;
	cout<<"Top Element is : "<<s.peek()<<endl;
	cout<<"Size of the Stack is : "<<s.size()<<endl;
	cout<<"IS Empty : "<<s.isempty()<<endl;
	return 0;
}
