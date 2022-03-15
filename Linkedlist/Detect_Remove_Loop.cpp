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
void removeloop(Node *head){
	Node *slow=head, *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	if(slow!=fast)
		return ;
	slow=head;
	while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	fast->next=NULL;
}
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	cout<<"Linkedlist is : ";
	printlist(head);
	head->next->next->next->next=head->next;
	removeloop(head);
	cout<<"Loop Has Been Removed";
	return 0;
}
