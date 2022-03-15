//In 1 Terverse only and Time Complixity is : O(n)
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
Node *reverse(Node *head){
	Node *curr=head, *prev=NULL;
	while(curr!=NULL){
		Node *next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;  //new head;
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
	head=reverse(head);
	cout<<"After Reversing Linkedlist : ";
	printlist(head);
	return 0;
}
