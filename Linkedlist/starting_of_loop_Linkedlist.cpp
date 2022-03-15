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
void starting_of_loop(Node *head){
	if(head==NULL)
		cout<<"Linkedlist is Empty";
	Node *slow=head, *fast=head;
	int isfound=0;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			isfound=1;
			break;
		}
	}
	if(isfound){
		slow=head;
		while(slow!=fast){
			slow=slow->next;
			fast=fast->next;
		}
		cout<<"Starting of the Loop is : "<<slow->data;
	}
	else
		cout<<"Loop Not Exist"<<endl;
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
	cout<<"Intially Linkedlist is : ";
	printlist(head);
	head->next->next->next->next=head->next;
	starting_of_loop(head);
	return 0;
}
