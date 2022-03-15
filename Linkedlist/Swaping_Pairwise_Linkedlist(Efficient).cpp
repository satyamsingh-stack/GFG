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
Node *swaping_pairwise(Node *head){
	if(head==NULL || head->next==NULL)
		return NULL;
	Node *curr=head->next->next;
	Node *prev=head;
	head=head->next;
	head->next=prev;
	while(curr!=NULL && curr->next!=NULL){
		prev->next=curr->next;
		prev=curr;
		Node *next=curr->next->next;
		curr->next->next=curr;
		curr=next;
	}
	prev->next=curr;
	return head;
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
	cout<<"After Swaping Pair Wise Linkedlist is : ";
	head=swaping_pairwise(head);
	printlist(head);
	return 0;
}
