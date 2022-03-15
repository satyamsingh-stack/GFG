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
Node *insertBegin(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		temp->next=temp;
		temp->prev=temp;
		return temp;
	}
	else{
		temp->next=head;
		temp->prev=head->prev;
		head->prev->next=temp;
		head->prev=temp;
		return temp;
	}
}
void printlist(Node *head){
	if(head==NULL)
		return ;
	Node *curr=head;
	do{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	while(curr!=head);
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
	temp2->next=head;
	head->prev=temp2;
	cout<<"Linkedlist is : ";
	printlist(head);
	head=insertBegin(head,5);
	cout<<"After Insertion in Beginning Linkedlist is : ";
	printlist(head);
	return 0;
}
