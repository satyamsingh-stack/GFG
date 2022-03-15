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
Node *insert_at_beginning(Node *head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
}
Node *insert_at_end(Node *head,int x){
	Node *curr=head;
	Node *temp=new Node(x);
	if(head==NULL)
		return temp;
	else{
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=temp;
		temp=NULL;
		return head;
	}
}
Node *insert_in_between(Node *head,int x,int y){
	Node *curr=head;
	if(head==NULL)
		return NULL;
	else{
		while(curr->data!=x){
			curr=curr->next;
			if(curr==NULL){
				cout<<"Node can not be inserted";
			}
		}
		Node *temp=new Node(y);
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
Node *delete_from_beg(Node *head){
	Node *curr=head;
	if(head==NULL)
		return NULL;
	else{
		Node *temp=head->next;
		delete(head);
		return temp;
	}
}
Node *delete_from_end(Node *head){
	Node *curr=head;
	if(head==NULL){
		return NULL;
	}
	else if(head->next==NULL){
		return NULL;
	}
	else{
		Node *curr=head;
		while(curr->next->next!=NULL){
			curr=curr->next;
		}
		delete(curr->next);
		curr->next=NULL;
		return head;
	}
}
int search(Node *head,int x){
	Node *curr=head;
	int pos=1;
	while(curr!=NULL){
		if(curr->data==x)
			return pos;
		else{
			pos++;
			curr=curr->next;
		}
	}
	return -1;
}
int main(){
	Node *head=NULL;
	head=insert_at_beginning(head,20);
	head=insert_at_beginning(head,10);
	cout<<"After insertion in Beginning Linkedlist is : ";
	printlist(head);
	head=insert_at_end(head,40);
	head=insert_at_end(head,50);
	cout<<"After insertion in End Linkedlist is : ";
	printlist(head);
	head=insert_in_between(head,20,30);
	cout<<"After insertion in Between linkedlist is : ";
	printlist(head);
	head=delete_from_beg(head);
	cout<<"After Delete Head Linkedlist is : ";
	printlist(head);
	head=delete_from_end(head);
	cout<<"After Delete Last Node Linkedlist is : ";
	printlist(head);
	int ans,x;
	cout<<"Enter Element Which is to be Search : ";
	cin>>x;
	ans=search(head,x);
	if(ans>=0)
		cout<<"Node Found At Position : "<<ans;
	else
		cout<<"Node can not be found"<<endl;
	return 0;
}
