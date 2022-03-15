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
Node *sorted(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	else if(x<head->data){
		temp->next=head;
		return temp;
	}
	else{
		Node *curr=head;
		while(curr->next!=NULL && curr->next->data<x)
			curr=curr->next;
		temp->next=curr->next;
		curr->next=temp;
		return head;
	}
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
	head=sorted(head,25);
	cout<<"Linkedlist is : ";
	printlist(head);
	return 0;
}
