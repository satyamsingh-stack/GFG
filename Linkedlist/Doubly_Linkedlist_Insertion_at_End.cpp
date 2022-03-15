#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
	Node(int x){
		data=x;
		next=prev=NULL;
	}
};
Node *insertend(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL)
		return temp;
	else{
		Node *curr=head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=temp;
		temp->prev=curr;
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
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	cout<<"Linkedlist is : ";
	printlist(head);
	head=insertend(head,40);
	head=insertend(head,50);
	cout<<"After insertion at End Linkedlist is : ";
	printlist(head);
	return 0;
}
