/*This solution is not efficient because if linkedlist data is 
big then we can not easily swap it, therefore we preffer method 2*/
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
	Node *curr=head;
	while(curr!=NULL && curr->next!=NULL){
		swap(curr->data,curr->next->data);
		curr=curr->next->next;
	}
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
	cout<<"After Swaping Pairwise Linkedlist is : ";
	head=swaping_pairwise(head);
	printlist(head);
	return 0;	
}
